//#include <stdio.h>
//#define LIST 3
//
//typedef struct score {
//	int num, kor, eng, math, tot;
//	double avg;
//};
//
//int main( )
//{
//	struct score student[LIST];
//	int i;
//
//	for (i = 0; i<LIST; i++) {
//		printf("�л� %d�� ����(����, ����, ����): ", i+1);
//		scanf("%d %d %d", &student[i].kor, &student[i].eng, &student[i].math);
//	}
//
//	for (i = 0; i<LIST; i++) {
//		student[i].tot = student[i].kor+student[i].eng+student[i].math;
//		student[i].avg = student[i].tot/3.0;
//	}
//
//	printf("�й�\t����\t����\t����\t����\t���\n");
//	printf("***************************************************\n");
//	for (i = 0; i<LIST; i++) {
//		printf("%d\t%d\t%d\t%d\t%d\t%lf\n", i+1, student[i].kor, student[i].eng, student[i].math, student[i].tot, student[i].avg);
//	}
//}