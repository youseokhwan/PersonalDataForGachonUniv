#include <stdio.h>
/* ������ ������ ���� */
void main()
{
	int i = 10, j = 20;
	int *ptr;

	printf("i�� �� = %d\nj�� �� = %d\n", i, j);
	printf("i�� �޸� �ּ�(&i) = %u\n", &i);
	printf("j�� �޸� �ּ�(&j) = %u\n", &j);

	ptr = &i;
	printf("\n<<ptr=&i ����>>\n");
	printf("ptr�� �޸� �ּ�(&ptr) = %u\n", &ptr);
	printf("ptr�� ��(ptr) = %u\n", ptr);
	printf("ptr�� ���� ��(*ptr) = %d\n", *ptr);

	ptr = &j;
	printf("\n<<ptr=&j ����>>\n");
	printf("ptr�� �޸� �ּ�(&ptr) = %u\n", &ptr);
	printf("ptr�� ��(ptr) = %u\n", ptr);
	printf("ptr�� ���� ��(*ptr) = %d\n", *ptr);

	i = *ptr;
	printf("\n<<i = *ptr ����>>\n");
	printf("i�� �� = %d\n", i);
}