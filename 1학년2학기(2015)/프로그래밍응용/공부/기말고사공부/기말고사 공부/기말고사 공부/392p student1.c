#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct student {
		int number;
		char name[10];
		double grade;
	};

	struct student s;
	
	s.number = 20070001;
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);

	return 0;
}