#include<bits/stdc++.h>
using namespace std;
class Nhanvien
{
	private:
		char *Manv;
		char *Hoten;
		int Sdt;
	public:
		Nhanvien *next;
		Nhanvien (char *mnv, char *tnv, int stc)
		{
			Manv= new char[strlen (mnv)+1];
			Hoten= new char[strlen (tnv)+1];
			strcpy(Manv,mnv);
			strcpy(Hoten,tnv);
			Sdt= stc;
			}
		char *Get_Manv()
		{
			return Manv;
			}
		char *Get_Hoten()
		{
			return Hoten;
			}
		int Get_Sdt()
		{
			return Sdt;
			}
		void Get (char *mnv, char *tnv, int stc)
		{
			Manv= new char[strlen (mnv)+1];
			Hoten= new char[strlen (tnv)+1];
			strcpy(Manv,mnv);
			strcpy(Hoten,tnv);
			Sdt= stc;
			}
	};
class quanly
{
	private:
		Nhanvien *first;
	public:
		quanly()
		{
			first= NULL;
			}
		void nhap();
		void xuat();
		void sapxep();
		Nhanvien *timkiem(char *manv);
		};
void quanly::nhap()
{
	char mnv[10], tnv[30];
	int sdt;
	do
	{
		cout<<"\n nhap ma nhan vien: ";
		fflush(stdin);
		gets(mnv);
		if(strcmpi(mnv,"")!=0)
		{
			cout<<"\n nhap ho ten: ";
			fflush(stdin);
			gets(tnv);
			cout<<"\n Nhap so dien thoai: ";
			cin>>sdt;
			Nhanvien *tam = new Nhanvien(mnv, tnv, sdt);
			tam->next=first;
			first= tam;
			}
		}while(strcmpi(mnv,"")!=0);
	}
void quanly::xuat()
{
	Nhanvien *p= first;
	while(p!=NULL)
	{
		cout<<"\n\n---------thong tin nhan vien-------------------";
		cout<<"\nMa nhan vien: "<<p->Get_Manv();
		cout<<"\nHo ten: "<<p->Get_Hoten();
		cout<<"\nSo dien thoai: "<<p->Get_Sdt();
		cout<<"\n\n----------------------------";
		p=p->next;
		}
	}
void quanly::sapxep()
{
	Nhanvien *p,*q;
	char temmnv[30] , temtnv[30];
	int temsdt;
	if(first != NULL)
		for(p = first; p->next != NULL; p=p->next)
			for(q= p->next; q!=NULL; q=q->next)
				if(strcmpi (p->Get_Hoten(),q->Get_Hoten()) > 0 )
				{
					strcpy(temmnv, p->Get_Manv());
					strcpy(temtnv, p->Get_Hoten());
					temsdt = p->Get_Sdt();
					p->Get(q->Get_Manv() , q->Get_Hoten() , q->Get_Sdt());
					q->Get(temmnv, temtnv, temsdt);
					}
				}
Nhanvien *quanly::timkiem(char *mnv)
	{
		Nhanvien *p=first;
		while (p!=NULL && strcmpi(p->Get_Manv(),mnv)!=0)
			p= p->next;
			return p;
			}
int main()
{
	quanly ds;
	ds.nhap();
	cout<<"\nHien thi danh sach nhan vien: ";
	ds.xuat();
	ds.sapxep();
	cout<<"\nHien thi danh sach sau khi sap xep: ";
	ds.xuat();
	char mnv[10], tnv[30];
	cout<<"\n nhap vao ma nhan vien muon tim kiem: ";
	fflush(stdin); gets(mnv);
	Nhanvien *p=ds.timkiem(mnv);
	char c;
	if(p!=NULL)
	{
		cout<<"\n da tim thay ma nhan vien cua ban! ";
		cout<<"\n ma nhan vien:"<<p->Get_Manv();
		cout<<"\n ho ten:"<<p->Get_Hoten();
		cout<<"\n so dien thoai:"<<p->Get_Sdt();
		}
	else
		cout<<"\n khong tim thay ma nhan vien nay";
		return 0;
		}
