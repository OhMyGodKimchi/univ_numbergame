#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int left_num, right_num;

void main() {
	int answer, guess, cnt=0;
	
	srand(time(NULL));

	answer = rand() % 100 + 1;
	int left_num = 1, right_num = 100;
	printf("1 ~ 100 ���� ���Դϴ�. ���ϱ��?");
	while(1) {
		
		scanf_s("%d", &guess);
		if (answer == guess) {
			cnt += 1;
			printf("��ǻ�Ͱ� ���� %d�� %d�� ���� �������ϴ�.", answer, cnt);
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
			printf("%d ~ %d ���� ���Դϴ�. ���ϱ��?", left_num, right_num);

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
			printf("%d ~ %d ���� ���Դϴ�. ���ϱ��?", left_num, right_num);
		}
		
	}
	printf("��ǻ�Ͱ� ���� %d�� %d�� ���� Ʋ�Ƚ��ϴ�.", answer, cnt);

	return 0;
}