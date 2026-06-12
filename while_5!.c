#include <stdio.h>

int main()

{
	int i = 5, factorial = 1;
	
	while(i >= 1)
	
	{
		printf("factorial * i = %d * %d\n", factorial, i);
		
		factorial *= i;
		i--;	
		
	}

}