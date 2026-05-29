#include <stdio.h>

int main (void)

{
	int x, y;
	
	printf("두 정수를 입력하세요.\n");
	scanf("%d %d", &x, &y);
	
	printf("%d + %d = %d\n", x, y, x+y);
	printf("%d - %d = %d\n", x, y, x-y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d\n", x, y, x/y);
	
	return 0;
}