#include <stdio.h>

int factorial(int n) {
	int factorial = 1;
	for (int i = 2; i <= n; i++)
		factorial = factorial * i;
	return factorial;
}

int nCr(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
	int n = 5, r = 10;
	printf("%d", nCr(n, r));
	return 0;
}


