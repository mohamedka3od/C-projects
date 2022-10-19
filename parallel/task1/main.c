#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main()
{
    clock_t strt = clock();
    int s=100000;
    int arr1[s],arr2[s],sum[s],mult[s];
    for(int i =0; i<s; i++){
        sum[i]=arr1[i]+arr2[i];
        printf("%i\n",sum[i]);
        mult[i]=arr2[i]*arr1[i];
        printf("%i\n",mult[i]);
    }
    clock_t e = clock();
    printf("time : %d\n",(e-strt)/CLOCKS_PER_SEC);

}
