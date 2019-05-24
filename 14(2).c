#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_round(char * src, char * find) {
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) ? 1 : 0;
}

int main2() {
	printf("%d\n", find_round("AABCD", "DAABC"));
	system("pause");
	return 0;
}