#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {

    clock_t start, end;
    double total_time = 0;

    int max_procs = omp_get_num_procs();

    printf("Num of max processor is: %d\n", max_procs);

    int max_threads = omp_get_max_threads();

    printf("Num of max threads is: %d\n", max_threads);

    int nthreads, tid;
	start = clock();
	for (size_t i = 0; i < 1000; i++) {

		omp_set_num_threads(max_threads);
		#pragma omp parallel private(nthreads, tid)
		{
			#pragma omp master
			{
				nthreads = omp_get_num_threads();
				printf("Number of threads = %d\n", nthreads);
				printf("Merry Christmas and a Happy New Year from Santa Claus\n");
			}
			tid = omp_get_thread_num();
			if(tid!=0){
				tid = omp_get_thread_num();
				printf("Merry Christmas from elf = %d\n", tid);
			}

		}
	}



    end = clock();
    total_time = ((double)(end-start))/CLOCKS_PER_SEC/1000;

    printf("computations time = %lf\n", total_time);

}
