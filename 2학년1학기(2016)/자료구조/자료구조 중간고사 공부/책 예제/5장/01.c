//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct ListNode {
//	char data[10];
//	struct ListNode *link;
//} listNode;
//
//typedef struct {
//	listNode *head;
//} linkedList_h;
//
//linkedList_h* createLinkedList_h(void);
//void freeLinkedList_h(linkedList_h *);
//void addLastNode(linkedList_h *, char *);
//void reverse(linkedList_h *);
//void deleteLastNode(linkedList_h *);
//void printList(linkedList_h *);
//
//linkedList_h *createLinkedList_h(void) {
//	linkedList_h *L;
//	L = (linkedList_h *)malloc(sizeof(linkedList_h));
//	L->head = NULL;
//	return L;
//}
//
//void addLastNode(linkedList_h *L, char *x) {
//	listNode *newNode;
//	listNode *p;
//	newNode = (listNode *)malloc(sizeof(listNode));
//	strcpy_s(newNode->data, sizeof(newNode->data), x);
//	newNode->link = NULL;
//	if (L->head==NULL) {
//		L->head = newNode;
//		return;
//	}
//	p = L->head;
//	while (p->link!=NULL)
//		p = p->link;
//	p->link = newNode;
//}
//
//void reverse(linkedList_h *L) {
//	listNode* p;
//	listNode* q;
//	listNode* r;
//
//	p = L->head;
//	q = NULL;
//	r = NULL;
//
//	while (p!=NULL) {
//		r = q;
//		q = p;
//		p = p->link;
//		q->link = r;
//	}
//	L->head = q;
//}
//
//void deleteLastNode(linkedList_h *L) {
//	listNode *previous;
//	listNode *current;
//	if (L->head==NULL)
//		return;
//	if (L->head->link==NULL) {
//		free(L->head);
//		L->head = NULL;
//		return;
//	}
//	else {
//		previous = L->head;
//		current = L->head->link;
//		while (current->link!=NULL) {
//			previous = current;
//			current = current->link;
//		}
//		free(current);
//		previous->link = NULL;
//	}
//}
//
//void freeLinkedList_h(linkedList_h *L) {
//	listNode *p;
//	while (L->head!=NULL) {
//		p = L->head;
//		L->head = L->head->link;
//		free(p);
//		p = NULL;
//	}
//}
//
//void printList(linkedList_h* L) {
//	listNode *p;
//	printf("L = (");
//	p = L->head;
//	while (p!=NULL) {
//		printf("%s", p->data);
//		p = p->link;
//		if (p!=NULL)
//			printf(", ");
//	}
//	printf(") \n");
//}
//
//int main( )
//{
//	linkedList_h *L;
//	L = createLinkedList_h( );
//	printf("(1) ���� ����Ʈ �����ϱ�! \n");
//	printList(L); getchar( );
//
//	printf("(2) ����Ʈ�� 3���� ��� �߰��ϱ�!\n");
//	addLastNode(L, "��");
//	addLastNode(L, "��");
//	addLastNode(L, "��");
//	printList(L); getchar( );
//
//	printf("(3) ����Ʈ �������� ��� �Ѱ� �߰��ϱ�!\n");
//	addLastNode(L, "��");
//	printList(L); getchar( );
//
//	printf("(4) ������ ��� �����ϱ�!\n");
//	deleteLastNode(L);
//	printList(L); getchar( );
//
//	printf("(5) ����Ʈ ���Ҹ� �������� ��ȯ�ϱ�!\n");
//	reverse(L);
//	printList(L); getchar( );
//
//	printf("(6) ����Ʈ ������ �����Ͽ�, ���� ����Ʈ ���·� �����!\n");
//	freeLinkedList_h(L);
//	printList(L);
//
//	getchar( );
//	return 0;
//}