#include<bits/stdc++.h>
using namespace std;
class Hocphan
{
	private:
		char *mahp, *tenhp;
		int sotc;
	public:
		Hocphan *next;
		Hocphan (char *mhp, char *thp, int tc)
		{
			mahp= new char[strlen (mhp)+1];
			tenhp= new char[strlen (thp)+1];
			strcpy(mahp,mhp);
			strcpy(tenhp,thp);
			sotc= tc;
			}
		char *Getmahp()
		{
			return mahp;
			}
		char *Gettenhp()
		{
			return tenhp;
			}
		int Getsotc()
		{
			return sotc;
			}
		void Get (char *mhp, char *thp, int tc)
		{
			mahp= new char[strlen (mhp)+1];
			tenhp= new char[strlen (thp)+1];
			strcpy(mahp,mhp);
			strcpy(tenhp,thp);
			sotc= tc;
			}
		};
class List
{
	private:
		Hocphan *first;
	public:
		List()
		{
			first= NULL;
			}
		void nhap();
		void xuat();
		void sapxep();
		Hocphan *timkiem(char *hp);
		void xoa(char *hp);
		};
void List::nhap()
{
	char mhp[10], thp[10];
	int tc;
	do
	{
		cout<<"\n nhap ma hoc phan: ";
		fflush(stdin);
		gets(mhp);
		if(strcmpi(mhp,"")!=0)
		{
			cout<<"\n nhap ten hoc phan: ";
			fflush(stdin);
			gets(thp);
			cout<<"\n Nhap so tin chi: ";
			cin>>tc;
			Hocphan *tam = new Hocphan(mhp, thp, tc);
			tam->next=first;
			first= tam;
			}
		}while(strcmpi(mhp,"")!=0);
	}
	
void List::xuat()
{
	Hocphan *p= first;
	while(p!=NULL)
	{
		cout<<"\n\n----------------------------";
		cout<<"\nMa hoc phan: "<<p->Getmahp();
		cout<<"\nTen hoc phan: "<<p->Gettenhp();
		cout<<"\nSo tin chi: "<<p->Getsotc();
		cout<<"\n\n----------------------------";
		p=p->next;
		}
	}
void List::sapxep()
{
	Hocphan *p,*q;
	char mahp[30] , thp[30];
	int tc;
	if(first != NULL)
		for(p = first; p->next != NULL; p=p->next)
			for(q= p->next; q!=NULL; q=q->next)
				if(strcmpi (p->Getmahp(),q->Getmahp()) > 0 )
				{
					strcpy(mahp, p->Getmahp());
					strcpy(thp, p->Gettenhp());
					tc = p->Getsotc();
					p->Get(q->Getmahp() , q->Gettenhp() , q->Getsotc());
					q->Get(mahp, thp, tc);
					}
				}
Hocphan *List::timkiem(char *mhp)
	{
		Hocphan *p=first;
		while (p!=NULL && strcmpi(p->Getmahp(),mhp)!=0)
			p= p->next;
			return p;
			}
void List::xoa(char *mhp)
{
	while(first!=NULL && strcmpi(first->Getmahp(),mhp)==0)
	{
		Hocphan *tam=first;
		first =first->next;
		delete tam;
	}
	if(first != NULL)
	{
		Hocphan *p= first;
		while(p->next !=NULL)
			if(strcmpi(p->next->Getmahp(),mhp) ==0)
			{
				Hocphan *tam=p->next;
				p->next = p->next->next;
				delete tam;
				}
			else
				p=p->next;
				}
			}
int main() {
	List ds;
	ds.nhap();
	cout<<"\n hien thi danh sach hoc phan: ";
	ds.xuat();
	ds.sapxep();
	cout<<"\n hien thi sau khi sap xep: ";
	ds.xuat();
	char mhp[10], thp[30];
	cout<<"\n nhap vao ma hoc phan muon xoa: ";
	fflush(stdin); gets(mhp);
	ds.xoa(mhp);
	cout<<"\n hien thi sau khi xoa: ";
	ds.xuat();
	cout<<"\n nhap vao ma hoc phan muon tim kiem: ";
	fflush(stdin); gets(mhp);
	Hocphan *p=ds.timkiem(mhp);
	char c;
	if(p!=NULL)
	{
		cout<<"\n da tim thay ma hoc phan cua ban! ";
		cout<<"\n ma hp:"<<p->Getmahp();
		cout<<"\n tem hp:"<<p->Gettenhp();
		cout<<"\n so tc:"<<p->Getsotc();
		}
	else
		cout<<"\n khong tim thay ma hoc phan nay";
		return 0;
		}


