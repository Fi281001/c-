#include<bits/stdc++.h>
using namespace std;

struct phanso
{
	int tu;
	int mau;
};

void nhap(phanso &ps)
{
	cout<<"nhap tu so"<<endl;
	cin>>ps.tu;
	do
	{
	cout<<"nhap mau so"<<endl;
	cin>>ps.mau;
	if(ps.mau==0){
		cout<<"nhap lai";	}
		}while(ps.mau==0);
}
void xuat(phanso ps){
	cout<<ps.tu<<" / "<<ps.mau<<endl;}
	
void tong(phanso a, phanso b){
	phanso tong;
	tong.tu=a.tu*b.mau+b.tu*a.mau;
    tong.mau=a.mau*b.mau;
	xuat(tong);
	}
void hieu(phanso a, phanso b){
	phanso hieu;
	hieu.tu=a.tu*b.mau-b.tu*a.mau;
    hieu.mau=a.mau*b.mau;
	xuat(hieu);
	}
void tich(phanso a, phanso b){
	phanso tich;
	tich.tu=a.tu*b.tu;
    tich.mau=a.mau*b.mau;
	xuat(tich);
	}
void thuong(phanso a, phanso b){
	phanso thuong;
	thuong.tu=a.tu*b.mau;
    thuong.mau=a.mau*b.tu;
	xuat(thuong);
	}
int main(){
	phanso phanso1;
	phanso phanso2;
	int chon;
	do{
	cout<<"-----------menu--------------"<<endl;
	cout<<"1: nhap phan so: "<<endl;
	cout<<"2: xuat phan so: "<<endl;
	cout<<"3: tong 2 phan so: "<<endl;
	cout<<"4: hieu 2 phân so: "<<endl;
	cout<<"5: tich 2 phan so: "<<endl;
	cout<<"6: thuong 2 phan so: "<<endl;
	cout<<"0: thoat"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"vui long chon chuc nang: "<<endl;
		cin>>chon;
	switch(chon) {
			case 0: break;
	
			case 1:	cout<<"nhap 2 phan so: "<<endl;
					cout<<endl;
					cout<<"nhap ps thu 1"<<endl;
					nhap(phanso1);
					cout<<"nhap ps thu 2"<<endl;
					nhap(phanso2);
					break;
			case 2: cout<<"xuat 2 phan so: "<<endl;
					cout<<"xuat ps thu 1"<<endl;
					xuat(phanso1);
					cout<<"xuat ps thu 2"<<endl;
					xuat(phanso2);
					break;
			case 3:	cout<<endl;
					cout<<"tinh tong 2 phan so la:"<<endl;
					tong(phanso1,phanso2);
					break;
			case 4:	cout<<endl;
					cout<<"tinh hieu 2 phan so la:"<<endl;
					hieu(phanso1,phanso2);
					break;
			case 5:	cout<<endl;
					cout<<"tinh tich 2 phan so la:"<<endl;
					tich(phanso1,phanso2);
					break;
			case 6:	cout<<endl;
					cout<<"tinh thuong 2 phan so la:"<<endl;
					thuong(phanso1,phanso2);
					break;
			default :{
			cout<<"nhap lai"<<endl;
			break;}
		
		}
	}while(chon!=0);
	
	
	return 0;
	}
