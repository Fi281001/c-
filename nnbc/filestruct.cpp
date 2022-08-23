#include<bits/stdc++.h>
using namespace std;

struct NgayThang
{
	int Ngay;
	int Thang;
	int Nam;

};

struct sinhvien
{
	string HoTen;
	NgayThang NS;
	int GT;// 0 la nu, 1 nam
	float Diem;
};

void nhapsv(sinhvien &sv){
	cin.ignore();
	cout<<"Ho Ten: ";
	getline(cin,sv.HoTen);
	cout<<"Ngay thang nam sinh: ";
	cin>>sv.NS.Ngay;
	cin>>sv.NS.Thang;
	cin>>sv.NS.Nam;
	do{
		cout<<"Nhap gioi tinh (0 la nu, 1 la nam): ";
		cin>>sv.GT;
		if(sv.GT!=0 && sv.GT!=1){
			cout<<"Nhap lai: "<<endl;
			}
	}while(sv.GT!=0 && sv.GT!=1);
	cout<<"Nhap diem: ";
	cin>>sv.Diem;
}
//void nhapds(sinhvien sv[], int &n){
//	
//    	for(int i=0;i<n;i++){
//        	nhapsv(sv[i]);
//		}
//}
void xuatsv(sinhvien s){
	cout<<setw(20)<<s.HoTen<<setw(10)<<s.GT;
	cout<<"  "<<setfill('0')<<setw(2)<<s.NS.Ngay<<"/"<<setfill('0')
	<<setw(2)<<s.NS.Thang<<"/"<<setfill('0')<<setw(4)<<s.NS.Nam;
	cout<<setfill(' ')<<setw(10)<<s.Diem<<endl;
}

void xuatds(sinhvien sv[], int n){
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
	cout<<endl;
	for(int i = 0;i < n;++i){
		xuatsv(sv[i]);
    }
}

void luufile(sinhvien sv[],int n){
	ofstream outfile("filestruct",ofstream::in); 
	for(int i=0;i<n;i++){
		nhapsv(sv[i]);
		outfile.write((char *)&sv[i],sizeof(sinhvien));
	}	
	outfile.close();
}

int main(){
	int n;
	sinhvien sv[100];
	cout<<"nhap sl sinh vien: "<<endl;
	cin>>n;
	cout<<"-----------luu file------"<<endl;
	luufile(sv,n);
	cout<<endl;
//	xuatds(sv,n);
//	cout<<"-----------xuat file------"<<endl;
//	docfile(sv,n);

	return 0;	
}

