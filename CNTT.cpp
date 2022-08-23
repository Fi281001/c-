#include<bits/stdc++.h>
#include<iostream>

struct SinhVien{
	
	char hoten[30];
	int lop;
	int sbd;
	float dtb;
	SinhVien *next;
};
// cau a
SinhVien *nhap(SinhVien *f){
	char ht[30];
	SinhVien *p;
	f=p;
	int n;
	printf("nhap n sinh vien");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\nhap ten: ");
		fflush(stdin);
		gets(ht);
		if(strlen(ht)!=0){
			p=(SinhVien *)malloc(sizeof(SinhVien));
			strcpy(p->hoten,ht);
			printf("\nnhap lop: ");
			scanf("%d",&p->lop);
			printf("\nso bao danh: ");
			scanf("%d",&p->sbd);
			printf("\ndiem trung binh: ");
			scanf("%f",&p->dtb);
			p->next=NULL;
			if(f==NULL)
				f=p;
			else{
				SinhVien *q=f;
				while(q->next != NULL)
					q=q->next;
				q->next;
				}
			}
		}
		return f;
	}
// cau b;
void in(SinhVien *f){
	SinhVien *p;
	for(p=f;p!=NULL;p=p->next)
	printf("\n%s,%d,%d,%f\n",p->hoten,p->lop,p->sbd,p->dtb);
	}
// cau c;
void indanhsachhonguyen(CNTT *f){
	CNTT *p;
	int dem= 0;
	printf("\nDanh sach co ho nguyen");
	for(p=f;p!=NULL;p=p->next)
		if(strncmp(p->hoten,"Nguyen", 6)==0){
			printf("\n%s,%s,%s\n",p->hoten,p->sdt,p->diachi);	
			dem++;
			}
		if(dem==0){
			printf ("\nkhng co trong danh sach");
			}
		}
// cau d;
CNTT *timkiem(CNTT *f, char *so){
	CNTT *p;
	for(p=f;p!=NULL;p=p->next)
		if(strncmp(p->sdt, so)==0)
			return p;
		return 0;
		}
// cau e;
void bosung(CNTT *f, char *dc, char *so, char *HT){
		if(timkiem(f,so)==NULL){
			CNTT *q=(CNTT *)malloc(sizeof(CNTT));
			strpcy(q->hoten, ht);
			strpcy(q->sdt, so);
			strpcy(q->diachi, dc);
		if(f==NULL)
			f=q;
		else 
		{
			CNTT *p;
			P=f;
			whlie (p->next)
				p==p->next;
			p->next=q;
			}
		}
	}
int main() {
	SinhVien *first;
	first=nhap(first);
	printf("\ndanhsachvuanhap: ");
	in(first);
	return 0;
	}
	
	
	
			
			



