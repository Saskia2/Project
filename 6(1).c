#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Factorial(int n) {
	if (n == 0) return 1;
	else {
		return n * Factorial(n - 1);
	}
}

int main() {
	int n;
	printf("����������(31����):");
	scanf("%d", &n);
	int result = Factorial(n);
	printf("%d! = %d\n", n, result);
	system("pause");
	return 0;
}
