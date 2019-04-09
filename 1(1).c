#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int fib(int n) {
	if (n <= 2) {
		return 1;
	}
	//第i-2项和第i-1项
	int last2 = 1;
	int last1 = 1;
	//第i项的结果
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
	printf("请输入要求的第多少个斐波那契数：");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}