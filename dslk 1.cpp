#include <bits/stdc++.h>
typedef int element;

typedef struct Node {
	element data;
	struct Node* next;
} Node;


Node* CreateNode(element data) {
	Node* p;
	p = (Node*)malloc(sizeof(Node));
	p->data = data;
	p->next = NULL;
	return p;
}

void InsertLast(Node **ppHead, element data) {
	Node* pi = CreateNode(data);
	while(*ppHead) 
	ppHead = &((*ppHead)->next);
	pi->next = NULL;
	*ppHead = pi;
}

int Count(Node* pHead) {
	int count = 0;
	while(pHead) {
		count++;
		pHead = pHead->next;
	}
	return count;
}

Node* FindKth(Node* pHead, int k) {
	if(k < 0 || k >= Count(pHead))
		return NULL;
	for(int i=0; i<k; i++)
		pHead = pHead->next;
	return pHead;
}

void Delete(Node** ppHead, Node* p) {
	while(*ppHead != p) {
		ppHead = &((*ppHead)->next);
	}
	*ppHead = p->next;
	free(p);
}

void Delete(Node** ppHead, int pos) {
	Node* pd = FindKth(*ppHead, pos-1);
	if(pd == NULL)
		return;
	Delete(ppHead, pd);
}

long long Sum(Node* pHead) {
	long long s = 0;
	while(pHead != NULL) {
		s += pHead->data;
		pHead = pHead->next;
	}
	return s;
}

int main() {
	Node* pHead = NULL;
	int n;
	scanf("%d\n", &n);
	int data;
	for(int i=0; i<n; i++) {
		scanf("%d", &data);
		InsertLast(&pHead, data);
	}
	Node* p = pHead;

	scanf("\n");
	while(true) {

		char c;
		scanf("%c", &c);
		switch(c) {
			case 'i':
				scanf("%d\n", &data);
				InsertLast(&pHead, data);
				break;
			case 'd':
				scanf("%d\n", &data);
				Delete(&pHead, data);
				break;
			case 's':
				printf("%d\n", Sum(pHead));
				break;
			case '0':
				return 0;
		}
	}
	return 0;
}
