#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 0, i;
	int result = 1;
	printf("����������(31����):");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		result = result * i;
	}
	printf("%d! = %d\n", n, result);
	system("pause");
	return 0;
}
