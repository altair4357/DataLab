#include <stdio.h>
#include <string.h>

long int fact(int);

int main()
{
	int i, result;

	printf("\n������ �Է��ϼ��� : ");
	scanf_s("%d", &i);
	result = fact(i);
	printf("\n\n %d�� ���丮�� ���� %d�Դϴ�.", i, result);
}

long int fact(int i) {

	int value;
	if (i <= 1) {
		printf("\n fact(1) �Լ� ȣ��!");
		printf("\n fact(1) �� 1 ��ȯ!!");
		return 1;
	}

	else {
		printf("\n fact(%d) �Լ� ȣ��!", i);
		value = (i * fact(i - 1));
		printf("\n fact(%d) �� %ld ��ȯ!!", i, value);
		return value;
	}
}