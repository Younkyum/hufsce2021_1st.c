#include <stdio.h>

int check_char(char ch)
{
	if (ch >= 'a' && ch <='z' || ch>='A' && ch<= 'Z') {
		return 2;
	} else if (ch >= '0' && ch <= '9') {
		return 1;
	} else{
		return 0;
	}
	
}

int main(void)
{
	char c;
	int ret;

	printf("문자를 입력하시오: ");
	scanf("%c", &c);

	ret = check_char(c);
	if (ret == 2)
		printf("%c는 영문자입니다. \n", c);
	else if ( ret == 1)
		printf("%c는 숫자입니다. \n", c);
	else
		printf("%c는 영문자와 숫자가 아닙니다. \n", c);
	return 0;
}
