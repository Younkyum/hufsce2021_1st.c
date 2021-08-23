#include <stdio.h> 

int main(void)
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하시요: ");
	scanf("%d", &n);

/*
	for (i = 1; i <= n; i++)
		fact = fact * i;
*/
// do-while 반복문으로 수정하시오.	
	i = 1;
	do {
		fact = fact * i;
		i = i+1;
	} while (i <= n);
	
	printf("%d!은 %d입니다.\n", n, fact);

	return 0;
}