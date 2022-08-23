#include <bits/stdc++.h>
using namespace std;
class Diem{
	private:
		int x, y, z;
	public:
		void Nhap();
		void Xuat();
		Diem timdiem();
		int kiemtra(Diem ob);
		float khoangcach(Diem ob);
};
void Diem::Nhap(){
	cin>>x>>y>>z;
}
void Diem::Xuat(){
	cout<<"( "<<x<<", "<<y<<", "<<z<<" )"<<endl;
}
Diem Diem::timdiem(){
	Diem ob1;
	ob1.x=-x;
	ob1.y=-y;
	ob1.z=-z;
	return ob1;
}
int Diem::kiemtra(Diem ob){
	if((x==ob.x)&&(y==ob.y)&&(z==ob.z)) return 1;
	return 0;
}
float Diem::khoangcach(Diem ob){
	float s;
	s=sqrt(pow(x-ob.x, 2)+pow(y-ob.y, 2)+pow(z-ob.z, 2));
	return s;
}
int main(){
	Diem ds[50];
	int n;
	float s=0;
	cout<<"Nhap so diem can nhap: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"Nhap diem thu "<<i+1<<" :";
		ds[i].Nhap();
	}
	cout<<"Cac diem trung nhau la: "<<endl;
	for(int i=0; i<n-1; i++)
		for(int j=0; j<n;j++){
			if(i==j) j++;
			if((ds[i].kiemtra(ds[j])==1)&&(i<j)) ds[i].Xuat();
		}
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n;j++)
			if(s<ds[i].khoangcach(ds[j])) s=ds[i].khoangcach(ds[j]);
	cout<<"Khoang cach lon nhat la: "<<s<<endl;
	return 0;
}
