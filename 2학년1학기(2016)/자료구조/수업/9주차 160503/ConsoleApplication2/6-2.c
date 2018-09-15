//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef int element; // int�� ���� element�� �ڷ������� ����
//
//typedef struct stackNode { // ������ ��� ���� ����
//	element data;
//	struct stackNode *link;
//}stackNode;
//
//stackNode* top; // ������ top ��带 �����ϱ� ���� ������ top ����
//
//void push(element item) // ���� ���� ����
//{
//	stackNode* temp = (stackNode *)malloc(sizeof(stackNode));
//	temp->data = item;
//	temp->link = top;
//	top = temp;
//}
//
//element pop( ) // ������ ���� �� ��ȯ ����
//{
//	element item;
//	stackNode* temp = top;
//
//	if(top==NULL) { // ���� ������ ���� ����Ʈ�� ���
//		printf("\n\n Stack is empty !\n");
//		return 0;
//	}
//	else { // ���� ������ ���� ����Ʈ�� �ƴ� ���
//		item = temp->data;
//		top = temp->link;
//		free(temp);
//		return item;
//	}
//}
//
//element peek( ) // ������ top ���� �˻� ����
//{
//	element item;
//	if(top==NULL) { // ���� ������ ���� ����Ʈ�� ���
//		printf("\n\n Stack is empty !\n");
//		return 0;
//	}
//	else { // ���� ������ ���� ����Ʈ�� �ƴ� ���
//		item = top->data;
//		return item;
//	}
//}
//
//void del( ) // ������ ���� ����
//{
//	stackNode* temp;
//	if(top==NULL) { // ���� ������ ���� ����Ʈ�� ���
//		printf("\n\n Stack is empty !\n");
//	}
//	else { // ���� ������ ���� ����Ʈ�� �ƴ� ���
//		temp = top;
//		top = top->link;
//		free(temp);
//	}
//}
//
//void printStack( ) // ������ ���� ��� ����
//{
//	stackNode* p = top;
//	printf("\n STACK [ ");
//	while(p) {
//		printf("%d ", p->data);
//		p = p->link;
//	}
//	printf("] ");
//}
//
//void main( )
//{
//	element item;
//	top = NULL;
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