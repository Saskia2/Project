#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int cover;
	int sum;
	int n;
	printf("�����������Ǯ��");
	scanf("%d", &cover);
	printf("\n");
	printf("�����뼸����ƿ���Ի��µ�һƿ��ˮ��");
	scanf("%d", &n);
	sum = cover;
	while (cover >= n) {
		sum += cover / n;
		cover = cover / n + cover % n;
	}
	printf("\n");
	printf("�ܹ����Ժ�%dƿ��ˮ\n", sum + (cover == n - 1));
	printf("\n");
	system("pause");
	return 0;
}