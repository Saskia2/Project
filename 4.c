#include<stdio.h>
#include<stdlib.h>

void Reversestring(char* str) {
	if (*str == '\0') {
		return ;
	}
	Reversestring(str + 1);
	printf("%c", *str);
}

int main() {
	char* arr = "abcd";
	Reversestring(arr);
	system("pause");
	return 0;
}

