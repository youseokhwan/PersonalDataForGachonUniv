/*
// 2��
#include<stdio.h>
int main(void)
{
	int money;

	printf("���� ǥ���� �Է��Ͻÿ�(����) : ");
	scanf("%d", &money);

	if(money <= 1000)
		printf("�ҵ漼�� %d�����Դϴ�.\n", money*8/100);
	else if(money > 1000 && money <= 4000)
		printf("�ҵ漼�� %d�����Դϴ�.\n", (money-1000)*17/100+1000*8/100);
	else if(money > 4000 && money <= 8000)
		printf("�ҵ漼�� %d�����Դϴ�.\n", (money-4000)*26/100+3000*17/100+1000*8/100);
	else
		printf("�ҵ漼�� %d�����Դϴ�.\n", (money-8000)*35/100+4000*26/100+3000*17/100+1000*8/100);

	return 0;
}
*/