#include<bits/stdc++.h>
using namespace std;

struct node{
	int a;
	node*next;
};

void chendau(int x, node *&F, node*&L){
		node*p = (node*)malloc(sizeof(node));
		// tao ptu
		p->a = x;
		p->next = NULL;
		//dua ptu vao ds
		if(F == NULL){
			F=L=p;//ptu dau la ptu cuoi
		}
		else {
			p->next=F;
			F=p;
		}
		x=x/2;
	}
void chensau(int x, node *&F, node*&L){
	node*p = (node*)malloc(sizeof(node));
	// tao ptu
	p->a = x;
	p->next = NULL;
	//dua ptu vao ds
	if(F == NULL){
		F=L=p;
	}
	else {
		L->next=p;
		L=p;
	}
}


void duyet(node*&F, node*&L){
	node*p=F;
	while(p != NULL){
		cout<<p->a;
		p=p->next;
	}
}
int main(){
	node*F = NULL;//F = First
	node*L = NULL;
	int x=6;
	for(int i=1; i<=4; i++){
		chendau(i, F, L);
	}
	duyet(F, L);
	return 0;
}
