#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define SECURITY 987321           // 지정된 security 값

int find_number_times(int n){
	int k = 0, c = 0;
	int a;
	for (; k != 1;){
		a = rand()%10;
		if (a == n) {
			break;}
		c++;
	}
	return c;
}

int main(void)
{
	printf("SECURITY = %d",SECURITY);
	srand((unsigned)time(NULL));
	int sum = 0, abc, times;
	int returnum = SECURITY;
	for (int j = 0; returnum > 0; j++){
		abc = returnum % 10;
		returnum = returnum / 10;
		times = find_number_times(abc);
		sum = sum + times;
	}
	printf("\n총 시도 횟수는 %d", sum);
	int d = rand()%10;
	return 0;
}