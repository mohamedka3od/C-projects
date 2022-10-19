#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <omp.h>
#include<math.h>

//Functions
void backsubstitution_p(double *A, double *b, double *x, int n, int t);
void backsubstitution_s(double *A, double *b, double *x, int n);
void seidel_p(double *A, double *b, double *x, int n, int maxit, int t);
void seidel_s(double *A, double *b, double *x, int n, int maxit);

int main(int argc, char *argv[])
{
    long n;
    //input matrix dimensions
    printf("Enter matrix dimension for a square matrix: ");
    scanf("%ld", &n);

    //defining requirements
    double *matrix = malloc(sizeof(double)*n*n);
    double *b = malloc(sizeof(double)*n);
    double *x = malloc(sizeof(double)*n);

		// matrix[0] = 27;
		// matrix[1] = 6;
		// matrix[2] = -1;
		// matrix[3] = 6;
		// matrix[4] = 15;
		// matrix[5] = 2;
		// matrix[6] = 1;
		// matrix[7] = 1;
		// matrix[8] = 54;

		// b[0] = 85;
		// b[1] = 72;
		// b[2] = 110;

    for(int i = 0; i< (n*n) ; i++)
    {
        double x = (rand()/(double)RAND_MAX);
        matrix[i] = x;
    }

    for(int i = 0; i<n; i++)
    {
        double x = (rand()/(double)RAND_MAX);
        b[i]= x;
    }

    // matrices
    double *matrix2 = malloc(sizeof(double)*n*n);
    double *b2 = malloc(sizeof(double)*n);
    double *x2 = malloc(sizeof(double)*n);

    double *matrix3 = malloc(sizeof(double)*n*n);
    double *b3 = malloc(sizeof(double)*n);
    double *x3 = malloc(sizeof(double)*n);

    double *matrix4 = malloc(sizeof(double)*n*n);
    double *b4 = malloc(sizeof(double)*n);
    double *x4 = malloc(sizeof(double)*n);


    for(int i =0; i<n*n; i++)
    {
        matrix2[i] = matrix[i];
        matrix3[i] = matrix[i];
        matrix4[i] = matrix[i];
    }

    for(int i = 0; i<n ; i++)
    {
        b2[i] = b[i];
        b3[i] = b[i];
        b4[i] = b[i];
    }


    printf("\n\nA * x = b  \n");
    printf("To find : x \n\n");

		int t;
    printf("\nEnter number of threads: ");
    scanf("%d", &t);

    //Back Substitution
    printf("\n 1. Back substitution: \n");
    // Serially
    double ta = omp_get_wtime();
    backsubstitution_s(matrix, b, x, n);
    ta = omp_get_wtime() - ta;

		for(int i = 0; i<n;i++){
			printf("x %d  = %f \n", i+1,  x[i]);
		}

    // Parallely
    double ta1 = omp_get_wtime();
    backsubstitution_p(matrix2, b2, x2, n,t);
    ta1 = omp_get_wtime() - ta1;

		for(int i = 0; i<n;i++){
			printf("x %d  = %f \n", i+1,  x2[i]);
		}

    printf("\n\t Time for serial execution: %0.30f\n\n", ta);
    printf("\n\t Time for parallel execution: %0.30f\n\n", ta1);

    //Gauss Seidel
    printf("\n 2. Gauss Seidel: \n");
		int maxit = 0;
		printf("\nEnter number of iterations: ");
    scanf("%d", &maxit);

    // Serially
    double tc = omp_get_wtime();
    seidel_s(matrix3, b3, x3, n,maxit);
    tc = omp_get_wtime() - tc;

		for(int i = 0; i<n;i++){
			printf("x %d  = %f \n", i+1,  x3[i]);
		}

    // Parallely
    double tc1 = omp_get_wtime();
    seidel_p(matrix4,b4,x4,n,maxit,t);
    tc1 = omp_get_wtime() - tc1;

		for(int i = 0; i<n;i++){
			printf("x %d  = %f \n", i+1,  x4[i]);
		}


    printf("\n\t Time for serial execution: %0.30f\n\n", tc);
    printf("\n\t Time for parallel execution: %0.30f\n\n", tc1);

    free(matrix);
    free(b);
    free(x);
    free(matrix2);
    free(b2);
    free(x2);
    free(matrix3);
    free(b3);
    free(x3);
    free(matrix4);
    free(b4);
    free(x4);

    return 0;
}

// For Back substitution:
// Use Gaussian elimination to get a matrix into upper triangular form
// Solve a triangular system using the row oriented algorithm
void backsubstitution_p(double *A, double *b, double *x, int n, int t)
{
    double temp;
    int i, j, k;
    for(i =0; i < n-1; i++)
    {
        #pragma omp parallel for num_threads(t) shared(n,A,b,i) private(j,k,temp)
        for(j = i+1; j < n; j++)
        {
                temp = (A[j*(n)+i]) / (A[i*(n)+i]);

                for(k = i; k < n; k++)
                {
                    A[j*(n)+k] -= temp * (A[i*(n)+k]);
                }
                b[j] -= temp * (b[i]);
        }
    }

		double tmp;
    #pragma omp parallel num_threads(t) private(i,j) shared(A, b, x, n,tmp)
    for(int i= n-1; i >=0; i--)
    {
        #pragma omp single
        tmp = b[i];

        #pragma omp for reduction(+: tmp)
				for(j = i+1; j< n; j++)
            tmp += -A[i*n+j]*x[j];

        #pragma omp single
        x[i] = tmp/A[i*n+i];
    }
}


void backsubstitution_s(double *A, double *b, double *x, int n)
{
    int i, j, k;
    for(i =0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
                double temp = (A[j*(n)+i]) / (A[i*(n)+i]);

                for(k = i; k < n; k++)
                {
                    A[j*(n)+k] -= temp * (A[i*(n)+k]);
                }
                b[j] -= temp * (b[i]);
        }
    }
    double tmp;
    for(int i= n-1; i >=0; i--)
    {
        tmp = b[i];
        for(j = i+1; j< n; j++)
            tmp += -A[i*n+j]*x[j];
        x[i] = tmp/A[i*n+i];
    }
}


void seidel_p(double A[], double b[], double x[], int n, int maxit, int t)
{
    for(int i = 0; i<n; i++)
    {
        x[i] = 0;
    }

    for(int k=0; k<maxit; k++)
    {
            #pragma omp parallel for num_threads(t)
            for(int i=0; i<n; i++)
            {
              	double dxi = b[i];

								for(int j=0; j<n; j++)
								{
										if(j!=i)
										{
												dxi-=A[i*n + j] * x[j];
										}
								}
								x[i] = dxi / A[i*n + i];
            }
    }
}

void seidel_s(double A[], double b[], double x[], int n, int maxit)
{
    double dxi;

    for(int i = 0; i<n; i++)
    {
        x[i] = 0;
    }

    for(int k=0; k<maxit; k++)
    {
        for(int i=0; i<n; i++)
        {
            dxi = b[i];
            for(int j=0; j<n; j++)
            {
                if(j!=i)
                {
                    dxi-=A[i*n + j] * x[j];
                }
            }
            x[i] = dxi / A[i*n + i];
        }
    }
}
