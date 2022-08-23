#include<bits/stdc++.h>
using namespace std;
struct thuvien {
	char masach[10];
	char tensach[30];
	char tentg[30];
	int nxb;
	thuvien *next;
};

thuvien *nhap(thuvien *f){
	char ms[10];
	thuvien *p;
	while(true)
	 {
		printf("Ma sach: ");
		fflush(stdin);
		gets(ms);
		if(strlen(ms)!=0)
		{
			p=(thuvien *)malloc(sizeof(thuvien));
			strcpy(p->masach,ms);
			printf("\ntensach: ");
			fflush(stdin);
			gets(p->tensach);
			printf("\nten tac gia: ");
			fflush(stdin);
			gets(p->tentg);
			printf("\nnamxb: ");
			scanf("%d",&p->nxb);
			p->next=NULL;
			if (f==NULL)
				f=p;
			else
				{
			thuvien *q = f;
			while(q->next != NULL) //duyet q ve cuoi
		
			q=q->next;
			q->next=p;
			}
		}
				else
					break;
				}
		return f;
		}
void in(thuvien *f){
		thuvien *p;
		for(p=f;p!=NULL;p=p->next)
		printf("\n%10s%15s%15s%5d\n",p->masach,p->tensach,p->tentg,p->nxb);		//cuoi %d nen co \n de no xuong hang, moi %s chen them so phan tu toi da cua chuoi nx
}
void Innxb(thuvien *first)
{ 
	thuvien *p; int dem=0;
	for (p=first; p!=NULL; p = p->next)
		if (p->nxb > 2018)
			dem++;

	printf(" So sach xuat ban sau nam 2018: %d\n",dem);
}

thuvien *timkiem(thuvien *f, char *tg){
	thuvien *p;
	tg[30];
	for(f=p;p!=NULL;p->next)
		if(strcmp(p->tentg, tg)==0)
			return p;
		return NULL;	
}
int main() 
{
	char tg[30];
	thuvien *first;
	first=NULL;
	first=nhap(first);
	printf("\ndanhsachvuanhap: ");
	
	in(first);
	Innxb(first);
	//timkiem(first,tg);
	
	return 0;
	}
	
