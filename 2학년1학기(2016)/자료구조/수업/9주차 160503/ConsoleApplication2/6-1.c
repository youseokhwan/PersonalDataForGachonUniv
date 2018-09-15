//#include <stdio.h>
//#include <stdlib.h>
//#define STACK_SIZE 100
//
//typedef int element; // int�� ���� element�� �ڷ������� ����
//element stack[STACK_SIZE];
//int top = -1; // ������ top�� �ʱⰪ�� -1�� ����
//
//void push(element item)	// ������ ���� ����
//{
//	if(top>=STACK_SIZE-1) { // ������ �̹� Full�� ���
//		printf("\n\n Stack is FULL ! \n");
//		return;
//	}
//	else stack[++top] = item;
//}
//
//element pop( ) // ������ ���� �� ��ȯ ����
//{
//	if(top==-1) { // ���� ������ ������ ���
//		printf("\n\n Stack is Empty!!\n");
//		return;
//	}
//	else return stack[top--];
//}
//
//void del( ) // ������ ���� ����
//{
//	if (top==-1) { // ���� ������ ������ ���
//		printf("\n\n Stack is Empty !\n");
//		exit(1);
//	}
//	else top--;
//}
//
//element peek( ) // ������ top ���� �˻� ����
//{
//	if(top==-1) { // ���� ������ ������ ���
//		printf("\n\n Stack is Empty !\n");
//		exit(1);
//	}
//	else return stack[top];
//}
//
//void printStack( ) // ���� ���� ��� ����
//{
//	int i;
//	printf("\n STACK [ ");
//	for(i = 0; i<=top; i++)
//		printf("%d ", stack[i]);
//	printf("] ");
//}
//
//void main( )
//{
//	int item;
//	printStack( );
//	push(1);
//	printStack( );
//	push(2);
//	printStack( );
//	push(3);
//	printStack( );
//
//	item = peek( );
//	printStack( );
//	printf("peek top => %d", item);
//
//	del( );
//	printStack( );
//
//	item = pop( );
//	printStack( );
//	printf("\t pop top => %d", item);
//
//	item = pop( );
//	printStack( );
//	printf("\t pop top => %d", item);
//
//	pop( );
//
//	getchar( );
//}