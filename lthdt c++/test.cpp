#include<bits/stdc++.h>

using namespace std;
class khachhang
{
	private:
		char hoten[50];
		char diachi[50];
		int chiso;
	public:
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
void sapxeps(khachhang ds[], int n) 
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		   if(ds[i].tongtien()>ds[j].tongtien())
		  {
		  	khachhang tem;
			 tem=ds[i];
            ds[i]=ds[j];
            ds[j]=tem;
		  }
		  }
		  }
		  for (int i = 0; i<= n-1;i++){
         cout << "\nThong tin cua chu ho thu " << i+1 << " la:";
         ds[i].xuat();}
		  }
void sotiencaonhat(khachhang ds[], int n){
	int max = ds[0].tongtien();
    for(int i = 0; i <= n-1; i++){
        if(max < ds[i].tongtien())
        {
            max = ds[i].tongtien();  
        }           
    }
    cout<<"\nnguoi co tong tien coa nhat la: "<<max;
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
	cout<<"\n------sapxeps-----";
	sapxeps(ds,n);
	sotiencaonhat(ds,n);
	return 0;
	}
