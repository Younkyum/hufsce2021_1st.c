#include <stdio.h>
#include <stdlib.h>

int rsp(){
	for (int i = 0; i < 10; i++){
		int com = rand()%3 +1;
		int user = rand()%3 +1;
		if (com == user) {
			printf("%d번째 게임은 비겼음\n",i+1);
		} else if (com > (user+1)%3) {
			printf("%d번째 게임은 홍길동이 이겼음.\n",i+1);
		} else {
			printf("%d번째 게임은 컴퓨터가 이겼음.\n",i+1);
		}
		char *s1 = "가위";
		char *s2 = "가위";
		switch (com) {
			case 1:
				s1 = "가위";
				break;
			case 2:
				s1 = "바위";
				break;
			case 3:
				s1 = "보";
				break;
		}
		switch (user) {
			case 1:
				s2= "가위";
				break;
			case 2:
				s2= "바위";
				break;
			case 3:
				s2= "보";
				break;
		}
		printf("      (컴퓨터 = %s 홍길동 = %s)\n", s1, s2);
	}
	return 0;
}

int check_alphabet() {
	int leng,sec;
	leng = rand()%99 + 1;
	int alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int count[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for (int i = 0; i < leng; i++) {
		sec = rand()%26;
		printf("%c", alphabet[sec]);
		count[sec] = count[sec] + 1;
	}
	printf("\n");
	for (int i = 0; i < 26; i++) {
		printf("%c: %d \n",alphabet[i], count[i]);
	}
	return 0;
}

int score_check() {
	int score[10][10];
	int linesum = 0;
	char grade = 'F';
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			score[i][j] = rand()%100 + 1;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			linesum = linesum + score[i][j];
			printf("%d ", score[i][j]);
		}
		switch (linesum/100) {
			case 9:
				grade = 'A';
				break;
			case 8:
				grade = 'B';
				break;
			case 7:
				grade = 'C';
				break;
			case 6:
				grade = 'D';
				break;
			default:
				grade = 'F';
				break;
		}
		printf("\n당신의 성적은 평균 %d점이며 등급은 %c입니다.\n\n",linesum/10,grade);
		linesum = 0;
	}
	return 0;
}

int setsort() {
	int temp, lright, rright;
	int line[10];
	for (int j = 1; j<11; j++) {
		printf("%d 번째 선택정렬입니다.\n", j);
		for (int i=0; i < 10; i++) {
			line[i] = rand()%100;
			printf("%d ", line[i]);
		}
		printf("\n-------------------------------------\n");
		for (int i = 0; i < 10; i++) {
			for (int k = 0; k < 10 - i; k++){
				if (line[k] > line[k + 1]) {
					temp = line[k];
					line[k] = line[k + 1];
					line[k +1] = temp;
				}
			}
		} //정렬끝
		for (int i = 0; i < 10; i++) {
			printf("%d ", line[i]);
		}
		printf("\n\n이진 탐색 : ");
		int value = 0, mid, checker = 0;
		value = rand()%100 + 1;
		lright = 0;
		rright = 9;
		while (lright < rright) {
			printf("[%d %d], ",lright, rright);
			mid = (lright + rright)/2;
			if (line[mid] == value) {
				checker = 1;
				break;
			} else if (line[mid] <= value) {
				lright = mid;
			} else if (line[mid] >= value) {
				rright = mid;
			}
			if (rright - lright == 1){
				printf("[%d %d], ",lright, rright);
				break;
			}
		}
		if (checker ==1) {
			printf("\n찾는 값 %d의 탐색 결과: %d\n\n", value, mid);
		} else {
			printf("\n찾는 값 %d의 탐색 결과: -1\n\n", value);
		}
		checker = 0;
	}
	return 0;
}


int main() {
	int number;
	srand((unsigned)time(NULL));
	number = rand()%5;
	switch (number) {
		case 1:
			printf("1번 가위바위보 게임\n\n");
			rsp();
			break;
		case 2:
			printf("2번 문자열에서 문자 빈도수 계산\n\n");
			check_alphabet();
			break;
		case 3:
			printf("3번 성적처리 프로그램\n\n");
			score_check();
			break;
		case 4:
			printf("4번 선택정렬과 2진탐색\n\n");
			setsort();
			break;
		case 0:
			printf("0번 종료합니다. \n\n컴퓨터프로그래밍 평가 과제 제출합니다.\n");
			printf("학과 : 컴퓨터공학부\n");
			printf("학년 : 1학년\n");
			printf("학번 : 202103378\n");
			printf("이름 : 진윤겸\n");
			break;
	}
	return 0;
}
