#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*The following benchmark timing code was taken from Peter Lawrey --
	https://stackoverflow.com/questions/7467245/cpu-execution-time-in-java
	and adapted for c*/
int main() {
	int input = 0;
	scanf("%d", &input);
	double runs = 10000; // enough to run for 2-10 seconds.
	int ans = 0;
	clock_t start;
	//Above is benchmark specific that won't get timed or compiled into Java
	for(int z=-10000;z<runs;z++) {
    	if(z == 0) start = clock();

    	// do test
		int a = input + 42;
		int b = input - 519234;
		int c = input + 13284713;
		int d = input - 91893;
		int e = input + 124782;
		int f = input - 12934;
		int g = input + 124908;

		int *h = (int*)malloc(10 * sizeof(int*));
		int *i = (int*)malloc(5 * sizeof(int*));
		int *j = (int*)malloc(2 * sizeof(int*));
		int *k = (int*)malloc(10 * sizeof(int*));
		int *l = (int*)malloc(20 * sizeof(int*));
		int *m = (int*)malloc(100 * sizeof(int*));
		int *n = (int*)malloc(150 * sizeof(int*));

		int *hh = h;
		int *ii = i;
		int *jj = j;
		int *kk = k;
		int *ll = l;
		int *mm = m;
		int *nn = n;

		*h = a;
		*i = b;
		*j = c;
		*k = d;
		*l = e;
		*m = f;
		*n = g;

		*h = e;
		*i = a;
		*j = f;
		*k = 1324;
		*l = 13908;
		*m = 7185612;
		*n = 19833;
		*h = *k;
		*l = *i;
		*n = *m;

		k++;
		l++;
		m++;
		n++;
		n++;
		n++;
		n++;
		h++;

		k = k + 4;
		l = l + 2 + 4 + 8;
		m = m + 52;
		n = n + 72;
		h = h + 2 + 2 + 2 + 2;
		ans = *h + *i + *j + *k + *l + *m + *n;

		free(hh);
		free(ii);
		free(jj);
		free(kk);
		free(ll);
		free(mm);
		free(nn);
	}
	//Below is benchmark specific that won't get timed or compiled into Java
	clock_t end = clock();
	double time = (double)(end - start) / CLOCKS_PER_SEC;
	printf("%f;", time);	//only print total time in seconds like so
	//0.001168;0.001168;0.001168
	//printf("Average Time: %fs\n", time/runs);
	//printf("Result: %d\n",ans);

	return 0;
	//return *h + *i + *j + *k + *l + *m + *n;
}
