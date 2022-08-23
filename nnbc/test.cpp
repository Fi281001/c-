#include<bits/stdc++.h>
using namespace std;
struct sinhvien
{
	string masv;
	string HoTen;
	float Diem;
};

int kt(string msv, sinhvien ds[], int &n){
	if(n==0)return 0;
	else
	{
		for(int i=0; i<n;i++){
			if(msv == ds[i].masv){
				return 1;
		}
	}
		return 0;
	}
}

void nhapsv(sinhvien ds[], int &n){
	cin.ignore();
	cout<<endl<<"ma sv: ";
	do {
		getline(cin, ds[n].masv);
		if(n > 0){
			if(kt(ds[n].masv, ds, n)==1)
			cout<<"Nhap lai: "<<endl;
		}
	}
	while (kt(ds[n].masv, ds, n)==1);
	cin.ignore();
	cout<<"Ho Ten: ";
	getline(cin,ds[n].HoTen);
	cout<<"Nhap diem: ";
	cin>>ds[n].Diem;
	n++;
	
}
void xuat(sinhvien ds[], int &n){
	cout<<setw(5)<<right<<"ma sv"<<setw(10)<<right<<"Ho Ten"<<setw(10)<<right<<"DIiem";
	cout<<endl;
		for(int i = 0;i < n;++i){
		cout<<setw(5)<<right<<ds[i].masv<<setw(10)<<right<<ds[i].HoTen<<setw(10)<<right<<ds[i].Diem<<endl;
    }
}
string layten(string s){
	int i,t=0;
	string ten;
	for( i=s.length();s[i]!=' ';i--);
	for(int k=i+1;k<s.length();k++)
	{
		ten+=s[k];
	}
	return ten;
}
int main(){
int n=0;
sinhvien ds[100];
int chon;
do{

	cout<<"\n-----------Menu--------------"<<endl;
	cout<<"1: Nhap danh sach sinh vien "<<endl;
	cout<<"2: Xuat danh sach sinh vien "<<endl;
	cout<<"0: Thoat khoi chuong trinh "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Vui long chon chuc nang: ";
	cin>>chon;
		switch(chon) {
		case 0: break;
		case 1:
			cout<<"-------------------"<<endl;
			cout<<"1: Nhap danh sach sinh vien: "<<endl;
			nhapsv(ds,n);
			break;
		case 2:
			cout<<"-------------------"<<endl;
			cout<<"2: Xuat danh sach sinh vien: "<<endl;
			xuat(ds,n);
			break;
		default :
			cout<<"Vui long nhap cac so co trong menu: ";}
			}while(chon!=0);
return 0;
}
