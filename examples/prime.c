/*  Taken from https://www.javatpoint.com/prime-number-program-in-c and modified
    by Chris Jones
*/

#include <stdio.h>

int isPrime(int n) {
	int i,m=0,flag=0;
	m=n/2;
	for(i=2;i<=m;i++) {
		if(n%i==0) {
			flag=1;
			return 0;
		}
	}
	if(flag==0) {
		return 1;
	}
	return 0;
}

int main() {
	printf("Enter the number to check prime:");
        int n = 0;
	scanf("%d",&n);
	if (isPrime(n) == 1) {
		printf("Number is prime\n");
	}
	else {
		printf("Number is not prime\n");
	}
	return 0;
}