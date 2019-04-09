#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int cal(int n, int k) {
	if (k == 0) {
		return 0;
	} 
	else if (k == 1) {
		return n;
	}else {
		return n * cal(n, k - 1);
	}
}

int main() {
	int n = 0;
	int k = 0;
	printf("请输入您要计算的n和k：");
	scanf("%d %d", &n, &k);
	printf("%d\n", cal(n, k));
	system("pause");
	return 0;
}
