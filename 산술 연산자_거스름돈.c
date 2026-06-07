#include <stdio.h>

int main ()
{
	int money, sum, rest;
	
	printf("투입한 돈과 물건 값을 입력하시오.");
	scanf("%d %d", &money, &sum);
	
	rest = money - sum;
	
	printf("투입한 돈 : %d\n", money);
	printf("물건 값 : %d\n", sum);
	printf("거스름 돈 : %d\n", rest);
	printf("\n");
	
	int coina, coinb, coinc;
	
	coina = rest/100;
	coinb = (rest - ((rest/100)*100))/10;
	coinc = (rest - ((rest/10)*10))/1;
	
	printf("100원 동전의 개수  : %d\n", coina);
	printf("10원 동전의 개수  : %d\n", coinb);
	printf("1원 동전의 개수 : %d\n", coinc);
	
	return 0;
}