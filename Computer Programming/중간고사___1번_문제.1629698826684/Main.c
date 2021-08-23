#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int n, num = 22;

	srand((unsigned)time(NULL));

	n = 1 + rand() % 3;

/*
	if (n == 1)
		num--;
	else if (n == 2)
		num++;
	else
		num = 0;
*/
//	이 부분의 코드를 switch 문으로 수정하시오	
	switch (n) {
		case 1:
			num--;
			break;
		case 2:
			num++;
			break;
		default:
			num = 0;
			break;
	}
	
	printf("결과값은 n = %d, num = %d\n", n, num);

	return 0;
}