#include <stdio.h>

int main ()

{
	int a, b, temp;
	
	printf("두 정수를 입력하세요.\n");
	scanf("%d %d", &a, &b);
	
	while(b != 0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}
	
	printf("최대공약수: %d\n", a);
	
	return 0;
}