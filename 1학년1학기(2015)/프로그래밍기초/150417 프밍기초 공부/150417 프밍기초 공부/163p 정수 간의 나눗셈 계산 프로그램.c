/*

// ����ڷκ��� �� ���� ������ �Է¹޾Ƽ� ���� ���� �������� �����Ѵ�.
// �������� �ϱ� ���� �и� 0������ if ���� �̿��Ͽ� �˻��Ѵ�.

#include <stdio.h>
int main(void)
{
	int num1, num2, result;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &num1);

	printf("�и� �Է��Ͻÿ�: ");
	scanf("%d", &num2);

	if(num2 == 0)
	{
		printf("0���� ���� ���� �����ϴ�.\n");
	}
	else
	{
		result = num1 / num2;
		printf("����� %d�Դϴ�.\n", result);
	}

	return 0;
}

*/