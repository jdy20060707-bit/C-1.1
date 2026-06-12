#include <stdio.h>

int main()

{
	int score;
	
	printf("점수를 입력하세요.: \n");
	scanf("%d", &score);
	
	if (score >= 90)
		printf("A학점 입니다.\n");
	
	else if (score >= 80)
		printf("B학점 입니다.\n");
		
	else if (score >= 70)
		printf("C학점 입니다.\n");
		
	else if (score >= 60)
		printf("D학점 입니다.\n");
		
	else
		printf("F학점 입니다.\n");
	
		
		return 0;
}