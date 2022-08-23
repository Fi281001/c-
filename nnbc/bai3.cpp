#include<bits/stdc++.h>
using namespace std;

struct sinhvien
{
	int masv;
	string HoTen;
	float Diem;
};

int kt(int msv, sinhvien sv[], int &n){
	if(n==0)return 0;
	else
	{
		for(int i=0; i<n;i++){
			if(msv == sv[i].masv){
				return 1;
		}
	}
		return 0;
	}
}
void nhap(sinhvien &sv){

    cout<<"ma sv: ";
	cin>>sv.masv;
	cin.ignore();
	cout<<"Ho Ten: ";
	getline(cin,sv.HoTen);
	cout<<"Nhap diem: ";
	cin>>sv.Diem;
	}
void nhapds(sinhvien sv[], int &n){
	for(int i=0;i<n;i++){
		nhap(sv[i]);
		}
	}
void sx_diem(sinhvien sv[],int n){
	sinhvien tem;
    for(int i = 0;i < n;++i){
        for(int j = i+1; j < n;++j){
            if(sv[i].Diem < sv[j].Diem){
                tem = sv[i];
                sv[i] = sv[j];
                sv[j] = tem;
            }
        }
    }
}	

void xuatsv(sinhvien s){
	cout<<setw(20)<<s.masv<<setw(20)<<s.HoTen<<setw(20)<<s.Diem<<endl;
}

void xuatds(sinhvien sv[], int n){
	cout<<setw(20)<<"ma sinh vien"<<setw(20)<<"ho va ten"<<setw(20)<<"Diem TB"<<endl;
	cout<<endl;
	for(int i = 0;i < n;++i){
		xuatsv(sv[i]);
    }
}

void luufile(sinhvien sv[],int n){
	ofstream f;
	f.open("filestruct2");
	for(int i=0;i<n;i++){
		f<<sv[i].masv<<"\t";
		f<<sv[i].HoTen<<"\t";
		f<<sv[i].Diem<<endl;
	}
	f.close();
	cout<<"da luu";
}


string layten(string s){
	int i;
	string ten;
	for( i=s.length();s[i]!=' ';i--);
	for(int k=i+1;k<s.length();k++)
	{
		ten+=s[k];
	}
	return ten;
}
void laytens(sinhvien sv[],int n){
		for(int i=0;i<n;i++){
			cout<<layten(sv[i].HoTen)<<endl;
			}
		xuatds(sv,n);
	}
void timkiem(sinhvien sv[], int n){
	cout<<"nhap ten muon tim kiem"<<endl;
	string ten;
	cin.ignore();
	getline(cin,ten);
	int kt=0;
	for(int i=0;i<n;i++){
		if(ten==layten(sv[i].HoTen)){
			xuatsv(sv[i]);
			}
		}
}
int main(){
	int n;

	sinhvien sv[100];
	cout<<"nhap sl sinh vien: "<<endl;
	cin>>n;
		int chon;
do{

	cout<<"\n-----------Menu--------------"<<endl;
	cout<<"1: Nhap danh sach sinh vien."<<endl;
	cout<<"2: Xuat danh sach sinh vien."<<endl;
	cout<<"3: Luu vao file"<<endl;
	cout<<"4: Sap xep sinh vien theo diem "<<endl;
	cout<<"5: Lay ten tu ho va ten "<<endl;
	cout<<"6: Tim ten trung voi ten tim kiem "<<endl;
	cout<<"0: Thoat khoi chuong trinh "<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Vui long chon chuc nang: ";
	cin>>chon;
	switch(chon) {
		case 0: break;
		case 1:
			cout<<"-------------------"<<endl;
			cout<<"1: Nhap danh sach sinh vien: "<<endl;
			nhapds(sv,n);
			break;
		case 2:
			cout<<"-------------------"<<endl;
			cout<<"2: Xuat danh sach sinh vien: "<<endl;
			xuatds(sv,n);
			break;
		case 3:
			cout<<"-------------------"<<endl;
			cout<<"3:Luu vao file "<<endl;
			luufile(sv, n);
			break;
		case 4:
			cout<<"-------------------"<<endl;
			cout<<"4: Sap xep sinh vien theo diem: "<<endl;
			sx_diem(sv,n);
			xuatds(sv,n);
			break;
		case 5:
			cout<<"-------------------"<<endl;
			cout<<"5: lay ten tu ho va ten "<<endl;
			laytens(sv,n);
			break;
		case 6:
			cout<<"-------------------"<<endl;
			cout<<"6: tim ten trung voi ten tim kiem "<<endl;
			timkiem(sv,n);
			break;

		default :
			cout<<"Vui long nhap cac so co trong menu: ";
		}
	}while(chon!=0);
	return 0;	
}

