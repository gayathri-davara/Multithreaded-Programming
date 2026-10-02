#include <stdio.h>
#include <omp.h>

#define NUM_THREADS 4

int main()
{
    omp_set_num_threads(NUM_THREADS);

    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num();

        printf("Thread %d reached Stage 1\n", thread_id);

        #pragma omp barrier

        printf("Thread %d reached Stage 2\n", thread_id);
    }

    return 0;
}
