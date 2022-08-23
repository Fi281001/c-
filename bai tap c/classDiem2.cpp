#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class diem{
	float x,y,z;
public:
	void nhap();
	void xuat();
	diem timdx();
	void trung(int n, diem *d);
	float kc(diem d);
	void kc_max(int n, diem *d);
	float get_x(){
		return x;
	}
	float get_y(){
		return y;
	}
	float get_z(){
		return z;
	}
};


void diem::nhap(){
	cout<<"Nhap toa do x, y, z: ";
	cin>>x; cin>>y; cin>>z;
}

void diem::xuat(){
	cout<<"Toa do (x,y,z) = "<<x<<","<<y<<","<<z<<endl;
}

diem diem::timdx(){
	x=-1*x;
	y=-1*y;
	z=-1*z;
	return *this;
}

void diem::trung(int n, diem *d){
	int a=0;
	for(int i=1; i<n; i++){
		int kt=1;
		for(int j=i+1; j<=n; j++){
			if(( d[i].get_x() == d[j].get_x() ) && ( d[i].get_y() == d[j].get_y() ) && ( d[i].get_z() == d[j].get_z() )){
				cout<<endl<<"--------------------------"<<endl;
				if(kt=1){
					cout<<"Toa do diem thu "<<i<<endl;
			 		d[i].xuat();
				}
				cout<<"Toa do diem thu "<<j<<endl;
				d[j].xuat();
				cout<<"--------------------------"<<endl;
				kt++;
				a++;
			 }
		}
	}
	if(a==0)cout<<"Khong co diem trung nhau";
}

float diem::kc(diem d){
	float s;
	s=(pow(d.x-x, 2) + pow(d.y-y, 2) + pow(d.z-z, 2));
	return sqrt(s);
}

void diem::kc_max(int n, diem *d){
	float max=0;
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			if(d[i].kc(d[j]) > max)max=d[i].kc(d[j]);
		}
	}
	cout<<"Khoang cach lon nhat Max = "<<max;
}

int main(){
	diem ds[50];
	diem s, s1;
	
	int n;
	cout<<"So diem can nhap:"; cin>>n;
	cin.ignore();
	for(int i=1;i<=n;i++){
		cout<<"nhap toa do diem thu "<<i<<endl;
		ds[i].nhap();
		cout<<endl;
	}
	
	//s.trung(n, ds);
	s.kc_max(n, ds);
	
	return 0;
}
