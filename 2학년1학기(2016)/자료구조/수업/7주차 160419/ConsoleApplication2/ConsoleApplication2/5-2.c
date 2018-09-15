//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct ListNode { // ���׽� ����Ʈ�� ��� ���� ����
//	float coef;
//	int expo;
//	struct ListNode* link;
//} ListNode;
//
//typedef struct ListHead { // ���׽� ����Ʈ�� ��� ��� ���� ����
//	ListNode* head;
//} ListHead;
//
//ListHead* createLinkedList(void) // ���� ���׽� ����Ʈ ���� ����
//{
//	ListHead* L;
//	L = (ListHead *)malloc(sizeof(ListHead));
//	L->head = NULL;
//	return L;
//}
//
//void addLastNode(ListHead* L, float coef, int expo)	// ���׽� ����Ʈ�� ������ ��� ���� ����
//{
//	ListNode* newNode;
//	ListNode* p;
//	newNode = (ListNode *)malloc(sizeof(ListNode));
//	newNode->coef = coef;
//	newNode->expo = expo;
//	newNode->link = NULL;
//	if (L->head==NULL) { // ���� ���׽� ����Ʈ�� ������ ���,
//		L->head = newNode; // �����ϴ� �� ��带 ����Ʈ�� ���� ���� �����Ѵ�.
//		return;
//	}
//	else { // ���� ���׽� ����Ʈ�� ������ �ƴ� ���,
//		p = L->head;
//		while (p->link!=NULL) { // ����Ʈ�� ������ ��带 ã�Ƽ�
//			p = p->link;
//		}
//		p->link = newNode; // ������ ������ ��� �ڿ� �� ��带 �����Ѵ�.
//	}
//}
//
//void addPoly(ListHead* A, ListHead* B, ListHead* C) // �� ���׽��� ���� ���ϴ� ����
//{
//	ListNode* pA = A->head;
//	ListNode* pB = B->head;
//	float sum;
//
//	while (pA && pB) { // �� ���׽Ŀ� ��尡 �ִ� ���� �ݺ� ����
//		if (pA->expo==pB->expo) {
//			sum = pA->coef+pB->coef;
//		}
//	}
//}

#include <stdio.h>
#include <stdlib.h>

typedef struct listnode {
	float coef;
	int expo;
	struct listnode* link;
} listnode;

typedef struct listhead {
	listnode* head;
} listhead;

listhead* createlinkedlist(void)
{
	listhead* L;
	L = (listhead *)malloc(sizeof(listhead));
	L->head = NULL;
	return L;
}

void addlastnode(listhead* L, float coef, int expo)

{
	listnode* newnode;
	listnode* p;
	newnode = (listnode *)malloc(sizeof(listnode));
	newnode->coef = coef;
	newnode->expo = expo;
	newnode->link = NULL;
	if (L->head==NULL) {
		L->head = newnode;
		return;
	}

	else {
		p = L->head;
		while (p->link!=NULL) {
			p = p->link;
		}

		p->link = newnode;
	}
}

void addpoly(listhead* A, listhead* B, listhead* C)

{
	listnode* pA = A->head;
	listnode* pB = B->head;
	float sum;

	while (pA && pB) {
		if (pA->expo==pB->expo) {
			sum = pA->coef+pB->coef;
			addlastnode(C, sum, pA->expo);
			pA = pA->link; pB = pB->link;
		}

		else if (pA->expo > pB->expo) {
			addlastnode(C, pA->coef, pA->expo);
			pA = pA->link;
		}

		else {
			addlastnode(C, pB->coef, pB->expo);
			pB = pB->link;
		}
	}

	for (; pA!=NULL; pA = pA->link) {
		addlastnode(C, pA->coef, pA->expo);
	}

	for (; pB!=NULL; pB = pB->link) {
		addlastnode(C, pB->coef, pB->expo);
	}
}

void printpoly(listhead* L)
{
	listnode* p = L->head;
	for (; p; p = p->link) {
		printf("%3.0fx^%d", p->coef, p->expo);
	}
}

int main(void) {
	listhead *A, *B, *C;

	A = createlinkedlist( );
	B = createlinkedlist( );
	C = createlinkedlist( );

	addlastnode(A, 4, 3);
	addlastnode(A, 3, 2);
	addlastnode(A, 5, 1);
	printf("\n A(x)=");
	printpoly(A);

	addlastnode(B, 3, 4);
	addlastnode(B, 1, 3);
	addlastnode(B, 2, 1);
	addlastnode(B, 1, 0);
	printf("\n B(x)=");
	printpoly(B);

	addpoly(A, B, C);
	printf("\n C(x)=");
	printpoly(C);

	getchar( );
}