#define_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void)

{
	printf("%c는 문자입니다.\n", 'A'); //%C는 문자열
	printf("%d는 정수입니다.\n", 123); //%d는 정수
	printf("%.2f는 실수입니다.\n", 3.141592); //%f는 실수
	
	return 0;
}