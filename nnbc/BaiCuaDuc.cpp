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
void nhapds(sinhvien sv[], int &n){
}

    for(int i=0;i<n;i++){
        nhapsv(sv[i]);
	}
void sx_ten(sinhvien sv[],int n){
		 sinhvien tem;
    for(int i = 0;i < n;++i){
        for(int j = i+1; j < n;++j){
            if(sv[i].HoTen > sv[j].HoTen){
                tem = sv[i];
                sv[i] = sv[j];
                sv[j] = tem;
            }
        }
    }
}

void sx_diem(sinhvien sv[],int n){
	sinhvien tem;
    for(int i = 0;i < n;++i){
        for(int j = i+1; j < n;++j){
            if(sv[i].Diem > sv[j].Diem){
                tem = sv[i];
                sv[i] = sv[j];
                sv[j] = tem;
            }
        }
    }
}	

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
	ofstream f;
	f.open("filestruct2");
	for(int i=0;i<n;i++){
		cin.ignore();
		f<<sv[i].HoTen<<"\t";
		f<<sv[i].NS.Ngay<<"/";
		f<<sv[i].NS.Thang<<"/";
		f<<sv[i].NS.Nam<<"\t";
		f<<sv[i].GT<<"\t";
		f<<sv[i].Diem<<endl;
	}
	f.close();
	cout<<"da luu";
}

void docfile() {
	char data[100];
	ifstream infile; 
    infile.open("filestruct2"); 
    cout << "\n===========================\n" ; 
    cout << "Doc du lieu co trong file!" << endl;
	int i = 0;
	while (infile >> data){
		if (i == 4){
			cout<<endl;
			i = 0;
		}
		cout<<data<<"\t";
		i++;
	}
    infile.close(); 
}

int main(){
	int n;
//	docfile();
	sinhvien sv[100];
	cout<<"nhap sl sinh vien: "<<endl;
	cin>>n;
		int chon;
do{

	cout<<"\n-----------Menu--------------"<<endl;
	cout<<"1: Nhap danh sach sinh vien."<<endl;
	cout<<"2: Xuat danh sach sinh vien."<<endl;
	cout<<"3: Doc file"<<endl;
	cout<<"4: Sap xep sinh vien theo ho ten "<<endl;
	cout<<"5: Sap xep sinh vien theo diem "<<endl;
	cout<<"6: Tim sinh vien co diem cao nhat "<<endl;
	cout<<"7: Tim sinh vien co diem thap nhat "<<endl;
	cout<<"8: Luu vao file"<<endl;
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
			cout<<"3: Doc file: "<<endl;
			docfile();
			break;
		case 4:
			cout<<"-------------------"<<endl;
			cout<<"4: Sap xep sinh vien theo ho ten: "<<endl;
			sx_ten(sv,n);
			xuatds(sv,n);
			break;
		case 5:
			cout<<"-------------------"<<endl;
			cout<<"5: Sap xep sinh vien theo diem: "<<endl;
			sx_diem(sv,n);
			break;
//		case 6:
//			cout<<"-------------------"<<endl;
//			cout<<"6: Tim sinh vien co diem cao nhat: "<<endl;
//			timsv_thapnhat(sv,n);
//			break;
//		case 7:
//			cout<<"-------------------"<<endl;
//			cout<<"7: Tim diem trung binh cua nam: "<<endl;
//			tim_diemtb_nam(sv,n);
//			break;
		case 8: 
			cout<<"-------------------"<<endl;
			cout<<"8: Luu file: "<<endl;
			luufile(sv, n);
			break;
		default :
			cout<<"Vui long nhap cac so co trong menu: ";
		}
	}while(chon!=0);
	return 0;	
}

