#include <stdio.h>

int main()

{
	int score;
	
	printf("점수를 입력하세요.: \n");
	scanf("%d", &score);
	
	if (score >= 80)
	{
		if (score >= 90)
			printf("A학점 입니다.\n");
		else
			printf("B학점 입니다.\n");
	}
	else
		printf("A나 B학점이 아닙니다.\n");
		
		return 0;
}