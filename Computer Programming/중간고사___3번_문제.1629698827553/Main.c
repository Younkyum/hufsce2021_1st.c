#include <stdio.h>

int main(void)
{
	int input = 0;
	printf("정수를 입력하시오: ");
	scanf("%d",&input);
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < i+1; j++){
			printf("%d ", input - i);
		}
		printf("\n");
	}
	
	
	return 0;
}
