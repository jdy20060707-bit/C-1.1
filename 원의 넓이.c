#include <stdio.h>

int main (void)

{
	float radius, area;
	
	printf("반지름을 입력하세요 : \n");
	scanf("%f", &radius);
	
	area = 3.14 * radius *radius;
	printf("원의 넓이 : %.2f\n", area);
	
	return 0;
}