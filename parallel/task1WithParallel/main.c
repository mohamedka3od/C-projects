#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main()
{

    int s=100000;
    int arr1[s],arr2[s],sum[s],mult[s];
    clock_t wstrt = clock();
    for(int i =0; i<s; i++){
        sum[i]=arr1[i]+arr2[i];
        printf("1:%i\n",sum[i]);
        mult[i]=arr2[i]*arr1[i];
        printf("2:%i\n",mult[i]);
    }
    clock_t we = clock();


    clock_t pstrt = clock();
    #pragma omp parallel for
    for(int i =0; i<s; i++){
        sum[i]=arr1[i]+arr2[i];
        printf("3:%i\n",sum[i]);
        mult[i]=arr2[i]*arr1[i];
        printf("4:%i\n",mult[i]);
    }
    clock_t pe = clock();

    printf("sequential time : %d\n",(we-wstrt)/CLOCKS_PER_SEC);
    printf("parallel time : %d\n",(pe-pstrt)/CLOCKS_PER_SEC);

}
