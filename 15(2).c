#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int cover;
	int sum;
	int n;
	printf("请输入给多少钱：");
	scanf("%d", &cover);
	printf("\n");
	printf("请输入几个空瓶可以换新的一瓶汽水：");
	scanf("%d", &n);
	sum = cover;
	while (cover >= n) {
		sum += cover / n;
		cover = cover / n + cover % n;
	}
	printf("\n");
	printf("总共可以喝%d瓶汽水\n", sum + (cover == n - 1));
	printf("\n");
	system("pause");
	return 0;
}