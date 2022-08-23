#include<bits/stdc++.h>

using namespace std;
class khachhang
{
	private:
		char hoten[50];
		char diachi[50];
		int chiso;
	public:
	//	khachhang();

		void nhap();
		void xuat();
		void sapxep(khachhang ds[], int n);
		char *get_hoten(){
			return hoten;
			}
		char *get_diachi(){
			return diachi;
			}
		int get_chiso(){
			return chiso;
			}
	
	};
void khachhang::nhap(){
	
	cout<<"\nnhap ho ten: ";
	fflush(stdin);
	gets(hoten);
	cout<<"\nnhap dia chi: ";
	fflush(stdin);
	gets(diachi);
	cout<<"\nnhap chi so tieu thu dien: ";
	cin>>chiso;
	}
void khachhang::xuat(){
	
		cout<<"\nho ten chu ho: "<<hoten;
		cout<<"\ndia chi: "<<diachi;
		cout<<"\nchi so tieu thu: "<<chiso;
	
	}
void sapxep(khachhang ds[], int n) 
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		   if(ds[i].get_hoten()<ds[j].get_hoten())
		  {
		  	khachhang tem;
			 tem=ds[i];
            ds[i]=ds[j];
            ds[j]=tem;
		  }
		  for (int i = 0; i<= n-1;i++){
         cout << "\nThong tin cua chu ho thu " << i+1 << " la:";
         ds[i].xuat();}
		  }
	} 
}
int main(){
	int n;
	khachhang ds[50];
	cin>>n;
	cout<<"----------nhap--------";
	for (int i = 0; i<= n-1;i++){
         cout << "\nThong tin cua chu ho thu " << i+1 << " la:";
         ds[i].nhap();
	}
	cout<<"-----------xuat--------";
	for (int i = 0; i<= n-1;i++){
         cout << "\nThong tin cua chu ho thu " << i+1 << " la:";
         ds[i].xuat();
	}
	cout<<"\n---------sap sep------";
	sapxep(ds,n);	
	
	return 0;
	}
