/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int answer;
	int guess;
	int tries = 0;

	srand(time(NULL));
	answer = rand();

	do
	{
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;
		
		if (guess > answer)
			printf("������ ������ �����ϴ�.\n");
		else if (guess < answer)
			printf("������ ������ �����ϴ�.\n");
	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ�� = %d\n", tries);

	return 0;
}
*/