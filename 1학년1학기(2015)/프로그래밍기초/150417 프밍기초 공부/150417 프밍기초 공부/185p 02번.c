/*

#include <stdio.h>
int main(void)
{
	int income, tax;

	printf("���� ǥ���� �Է��Ͻÿ�(����): ");
	scanf("%d", &income);

	if(income <= 1000)
		tax = income * 8 / 100;
	else if(income > 1000 && income <= 4000)
		tax = 1000 * 8 / 100 + (income - 1000) * 17 / 100;
	else if(income > 4000 && income <= 8000)
		tax = 1000 * 8 + 3000 * 17 / 100 + (income - 4000) * 26 / 100;
	else
		tax = 1000 * 8 / 100 + 3000 * 17 / 100 + 4000 * 26 / 100 + (income - 8000) * 35 / 100;

	printf("�ҵ漼�� %d�����Դϴ�.\n", tax);

	return 0;
}

*/