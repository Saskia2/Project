#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fib(int n) {
	if (n <= 2) {
		return 1;
	}
	//��i-2��͵�i-1��
	int last2 = 1;
	int last1 = 1;
	//��i��Ľ��
	int cur = 0;
	for (int i = 3; i <= n; ++i) {
		cur = last2 + last1;
		last2 = last1;
		last1 = cur;
	}
	return cur;
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