/* ����� ����ϴ� ���α׷�

#include <stdio.h>

int input;

int get_divisor();
int main(void)
{
	printf("�� �Է�: ");
	scanf("%d", &input);

	get_divisor();

	return 0;
}

int get_divisor()
{
	int i;

	printf("���: ");

	for(i = 1; i <= input; i++)
	{
		if(input % i == 0)
			printf("%d ", i);
	}

	printf("\n");
}
*/