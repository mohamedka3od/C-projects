#include<stdio.h>
#include<omp.h>
#include <time.h>


int k=0;

int partition(int arr[], int low_index, int high_index)
{
int i, j, temp, key;
key = arr[low_index];
i= low_index + 1;
j= high_index;
while(1)
{
while(i < high_index && key >= arr[i])
    i++;
while(key < arr[j])
    j--;
if(i < j)
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
else
{
temp= arr[low_index];
arr[low_index] = arr[j];
arr[j]= temp;
return(j);
}
}
}


void quicksort(int arr[], int low_index, int high_index)
{
int j;

if(low_index < high_index)
{
j = partition(arr, low_index, high_index);


#pragma omp parallel sections
{
    #pragma omp section
    {
        k=k+1;
        quicksort(arr, low_index, j - 1);
    }

    #pragma omp section
    {
        k=k+1;
        quicksort(arr, j + 1, high_index);
    }

}
}
}


int main()
{
long n=100000;
	int arr[n];
	srand(1);
	for(int i=0;i<n;i++)
      arr[i]=rand()%n;
int i;
clock_t start, end;

start = clock();
quicksort(arr, 0, n - 1);
end = clock();
printf("\nSorted array in %f\n",((double) (end - start)) / CLOCKS_PER_SEC);

/*printf("Elements of array after sorting \n");

for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}

printf("\n");*/
}
