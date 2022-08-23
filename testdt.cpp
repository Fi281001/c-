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
		int tongtien(){
   	 		int s;
    		if( chiso <=100) s=chiso*2000;
    		if(chiso>100 &&chiso<=200) s=100*2000+(chiso-100)*3000;
    		if(chiso>200) s=100*2000+100*3000+(chiso-200)*5000;
			return s;
		}
		void sapxeps(khachhang ds[], int n);
		void sotiencaonhat(khachhang ds[], int n);
};
void khachhang::nhap(){
	
	cout<<"\nHo ten: ";
	fflush(stdin);
	gets(hoten);
	cout<<"Dia chi: ";
	fflush(stdin);
	gets(diachi);
	cout<<"Chi so tieu thu dien: ";
	cin>>chiso;
	}
void khachhang::xuat(){
	
		cout<<"\nHo ten chu ho: "<<hoten;
		cout<<"\nDia chi: "<<diachi;
		cout<<"\nChi so tieu thu: "<<chiso;
	
}
void sapxep(khachhang ds[], int n) 
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		   if(ds[i].get_chiso()<ds[j].get_chiso())
		  	{
		  	khachhang tem;
			tem=ds[i];
            ds[i]=ds[j];
            ds[j]=tem;
		  	}
}
void sotiencaonhat(khachhang ds[], int n){
	int max = 0;
    for(int i = 0; i <= n-1; i++){
        if(max < ds[i].tongtien())
        {
            max = ds[i].tongtien();  
        } 
    }
  	for(int i=0;i<=n-1;i++){
		if(ds[i].tongtien() == max)
		ds[i].xuat();}
	cout<<"\nso tien: "<<max;
    }
int main(){
	int n;
	khachhang ds[50];
	cout<<"Nhap so khach hang: ";
	cin>>n;
	cout<<"\n-----------------------------------";
	for (int i = 0; i<= n-1;i++){
         cout <<"\nNhap thong tin cua chu ho thu " << i+1 << " :";
         ds[i].nhap();
	}
	cout<<"\n-----------xuat-----------";
	for (int i = 0; i<= n-1;i++){
         cout << "\nThong tin cua chu ho thu " << i+1 << " la:";
         ds[i].xuat();  
	}
	sapxep(ds,n);
	cout<<"\n---------------------------------";
	cout<<"\nDanh sach khach hang sau khi sap xep: ";
	for (int i = 0; i<= n-1;i++)
		ds[i].xuat();
	cout<<"\n------nguoi co so tien cao nhat----";
	sotiencaonhat(ds,n);
	return 0;
	}
