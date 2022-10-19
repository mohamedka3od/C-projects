#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
    printf("max num of threads =%d\n", omp_get_max_threads());
    printf("num of active threads =%d\n", omp_get_num_threads());
    printf("num of active devices =%d\n", omp_get_num_devices());
    printf("num of processors =%d\n", omp_get_num_procs());
    printf("num of parallel processors =%d\n", omp_in_parallel());
    printf("num of active thread =%d\n", omp_get_thread_num());
    return 0;
}
