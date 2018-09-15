#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode{ // �ܼ� ���� ����Ʈ�� ��� ���� ����
	char data[10];
	struct ListNode* link;
} listNode;

typedef struct{ // ����Ʈ�� ��� ����� ���� ����
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h( );
void freeLinkedList_h(linkedList_h*);
void addLastNode(linkedList_h*, char*);
void reverse(linkedList_h*);
void deleteLastNode(linkedList_h*);
void printList(linkedList_h*);

linkedList_h* createLinkedList_h(){ // ���� ���� ����Ʈ ���� ����
	linkedList_h* L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h)); // ��� ��� �Ҵ�
	L->head = NULL;
	return L;
}

void addLastNode(linkedList_h* L, char* x) { // ����Ʈ�� ������ ��� ���� ����
	listNode* newNode;
	listNode* p;
	newNode = (listNode*)malloc(sizeof(listNode)); // ������ �� ��� �Ҵ�
	strcpy(newNode->data, x); // �� ����� ������ �ʵ忡 x ����
	newNode->link = NULL;
	if (L->head==NULL) { // ���� ����Ʈ�� ������ ���
		L->head = newNode;
		return;
	}
	p = L->head;
	while (p->link!=NULL) p = p->link;
	p->link = newNode;
}

void reverse(linkedList_h* L) { // ����Ʈ�� ��� ������ �������� �ٲٴ� ����
	listNode* p;
	listNode* q;
	listNode* r;

	p = L->head;
	q = NULL;
	r = NULL;

	while (p!=NULL) { // ����� ������ �ݴ�� �ٲٱ�
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	L->head = q;
}

void deleteLastNode(linkedList_h* L) { // ����Ʈ�� ������ ��� ���� ����
	listNode* previous;
	listNode* current;
	if (L->head==NULL) return; // ���� ����Ʈ�� ���, ���� ���� �ߴ�
	if (L->head->link==NULL) { // ����Ʈ�� ��尡 �� ���� �ִ� ���
		free(L->head); // ù ��° ����� �޸𸮸� ����
		L->head = NULL; // ����Ʈ ���� �����͸� null�� ����
		return;
	}
	else { // ����Ʈ�� ��尡 ���� �� �ִ� ���
		previous = L->head;
		current = L->head->link;
		while (current->link!=NULL) {
			previous = current;
			current = current->link;
		}
		free(current);
		previous->link = NULL;
	}
}

void freeLinkedList_h(linkedList_h* L) { // ����Ʈ ��ü �޸� ���� ����
	listNode* p;
	while (L->head!=NULL) {
		p = L->head;
		L->head = L->head->link;
		free(p);
		p = NULL;
	}
}

void printList(linkedList_h* L) { // ��� ������� ����Ʈ�� ����ϴ� ����
	listNode* p;
	printf("L = (");
	p = L->head;
	while (p!=NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p!=NULL) printf(", ");
	}
	printf(")\n");
}

// 207p 107��°�� ������