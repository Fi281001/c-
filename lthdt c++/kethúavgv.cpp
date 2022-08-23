#include<bits/stdc++.h>
using namespace std;
class nguoi
{ 
	char Ma[10];
	char Hoten[25];
	public:
		void nhap()
		{
			cout<<"\nNhap ma: ";
			fflush(stdin);
			gets(Ma);
			cout<<"\nNhap ho ten: ";
			gets(Hoten);
			}
		void xuat(){
			cout<<"\n Ma: "<<Ma;
			cout<<"\n Hoten: "<<Hoten;
			}
		};
class sinhvien : public nguoi
{
	float dtb;
	public:
		void nhapsv(){
			cout<<"\nNhap diem trung binh: ";
			fflush(stdin);
			cin>>dtb;
			}
		void xuatsv(){
			cout<<"\nDiem trung binh: "<<dtb;}
			
		int khenthuong()
			{
				return dtb>8;
				}
			};
class giaovien : public nguoi
{
	float sbb;
	public:
		void nhapgv(){
			cout<<"\nSo bai bao nghien cuu: ";
			fflush(stdin);
			cin>>sbb;
			}
		void xuatgv(){
			cout<<"\nSo bai bao nghien cuu: "<<sbb;
		}
		int khenhuong(){
			return sbb>1;
			}
		};
int main(){
	sinhvien sv[100];
	giaovien gv[100];
	int n, m;
	cout<<"\nNhap so sinh vien: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		sv[i].nhap();
		sv[i].nhapsv();
		}
	cout<<"\nDanh sach sinh vien duoc khen thuong: ";
	for(int i=0;i<n;i++){
		if(sv[i].khenthuong())
			{
				sv[i].xuat();
				sv[i].xuatsv();
				}
				}
	cout<<"\nNhap so giao vien: ";
	cin>>m;
	for(int i=0;i<m;i++)
	{
		gv[i].nhap();
		gv[i].nhapgv();
		}
	cout<<"\nDanh sach sinh vien duoc khen thuong: ";
	for(int i=0;i<m;i++){
		if(sv[i].khenthuong())
			{
				gv[i].xuat();
				gv[i].xuatgv();
				}
				}
	return 0;
	}
	
