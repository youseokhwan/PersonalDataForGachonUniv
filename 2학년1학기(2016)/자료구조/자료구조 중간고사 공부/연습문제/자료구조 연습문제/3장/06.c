//#include <stdio.h>
//
//void change_alpha(char *pc);
//
//void main( )
//{
//	char input[20];
//
//	printf("���ڿ� �Է�: ");
//	scanf("%s", input);
//
//	change_alpha(input);
//
//	printf("��ȯ ��: %s\n", input);
//}
//
//void change_alpha(char *pc)
//{
//	int i;
//
//	for (i = 0; i<20; i++) {
//		if (pc[i]>='A'&&pc[i]<='Z')
//			pc[i] += 32;
//		else if (pc[i]>='a'&&pc[i]<='z')
//			pc[i] -= 32;
//	}
//}