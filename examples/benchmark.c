#include <stdio.h>
#include <time.h>
int main() {
	int num = 0;
	scanf("%d", &num);
	clock_t start = clock();
	//Above is benchmark specific that won't get timed or compiled into Java

	int a = num + 42;
	int b = num - 519234;
	int c = num + 13284713;
	int d = num - 91893;
	int e = num + 124782;
	int f = num - 12934;
	int g = num + 124908;

	int *h = &a;
	int *i = &b;
	int *j = &c;
	int *k = &d;
	int *l = &e;
	int *m = &f;
	int *n = &g;

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
	l--;
	m++;
	n++;
	n++;
	n++;
	n++;
	h--;

	k = k + 4;
	l = l + 2 + 4 + 8;
	m = m + 52;
	n = n + 72;
	h = h + 2 + 2 + 2 + 2;

	//Below is benchmark specific that won't get timed or compiled into Java
	clock_t end = clock();
	double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
	printf("%f", time_spent);
	printf("%d - %d - %d - %d - %d - %d - %d",*h,*i,*j,*k,*l,*m,*n);
	return 0;
	//return *h + *i + *j + *k + *l + *m + *n;
}