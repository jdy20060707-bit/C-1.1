#include <stdio.h>

int main()

{
	int i = 1, gugu;
	
	printf("´Ü: ");
	scanf("%d", &gugu);
	
	while(i <= 9)
	
	{	
		printf("%d * %d = %d\n", gugu, i, gugu * i);
		i++;
		
	}
	
	return 0;

}