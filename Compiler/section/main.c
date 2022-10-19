#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main()
{
    #pragma omp parallel for
        for(int i = 0; i<9; i++){
            printf("welcome1 from thread : %d\n",omp_get_thread_num());
        }

        for(int i = 0; i<8; i++){
            printf("welcome2 from thread : %d\n",omp_get_thread_num());
        }


    return 0;
}
