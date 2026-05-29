#include <stdio.h>

int main (void)
{
	int x, y;
	int sum;
	int diff;
	int mull;
	int div;
	
	x = 5;
	y = 10;
	
	sum = x+y; //더하기
	diff = x-y; //뺴기
	mull = x*y; //곱하기
	div = x/y; //나누기
	
	printf("두 수의 합은 : %d\n", sum);
	printf("두 수의 빼기는  : %d\n", diff);
	printf("두 수의 곱은 : %d\n", mull);
	printf("두 수의 나누기는 :%d\n", div);     
	
	
	return 0;
}