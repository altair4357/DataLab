#include <stdio.h>
#include <string.h>

long int fact(int);

int main()
{
	int i, result;

	printf("\n정수를 입력하세요 : ");
	scanf_s("%d", &i);
	result = fact(i);
	printf("\n\n %d의 팩토리얼 값은 %d입니다.", i, result);
}

long int fact(int i) {

	int value;
	if (i <= 1) {
		printf("\n fact(1) 함수 호출!");
		printf("\n fact(1) 값 1 반환!!");
		return 1;
	}

	else {
		printf("\n fact(%d) 함수 호출!", i);
		value = (i * fact(i - 1));
		printf("\n fact(%d) 값 %ld 반환!!", i, value);
		return value;
	}
}