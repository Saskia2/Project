#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fib(int n) {
	int a = 1;
	int b = 1;
	int c = 1;
	if (n <= 2) {
		return 1;
	}
	else {
		for (int i = 0; i < n - 2; ++i) {
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
int main() {
	int n = 0;
	printf("������Ҫ��ĵڶ��ٸ�쳲���������");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
