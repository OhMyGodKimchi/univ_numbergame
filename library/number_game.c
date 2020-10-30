#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int left_num, right_num;

void main() {
	int answer, guess, cnt=0;
	
	srand(time(NULL));

	answer = rand() % 100 + 1;
	int left_num = 1, right_num = 100;
	printf("1 ~ 100 중의 값입니다. 얼마일까요?");
	while(1) {
		
		scanf_s("%d", &guess);
		if (answer == guess) {
			cnt += 1;
			printf("컴퓨터가 숨긴 %d를 %d번 만에 맞혔습니다.", answer, cnt);
			return 0;
		}
		else if (answer > guess) {
			cnt += 1;
			if (left_num < guess) {
				left_num = guess + 1;
			}
			else {
				left_num;
			}
			if (cnt == 5) {
				break;
			}
			printf("%d ~ %d 중의 값입니다. 얼마일까요?", left_num, right_num);

		}
		else if (answer < guess) {
			cnt += 1;
			if (right_num > guess) {
				right_num = guess - 1;
			}
			else {
				right_num;
			}
			if (cnt == 5) {
				break;
			}
			printf("%d ~ %d 중의 값입니다. 얼마일까요?", left_num, right_num);
		}
		
	}
	printf("컴퓨터가 숨긴 %d를 %d번 만에 틀렸습니다.", answer, cnt);

	return 0;
}