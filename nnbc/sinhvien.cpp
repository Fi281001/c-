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

void nhapsv(sinhvien &s){
	cout<<"Ho Ten: ";
	cin.ignore();
	getline(cin,s.HoTen);
	cout<<"Ngay thang nam sinh: ";
	cin>>s.NS.Ngay;
	cin>>s.NS.Thang;
	cin>>s.NS.Nam;
	do{
		cout<<"Nhap gioi tinh (0 la nu, 1 la nam): ";
		cin>>s.GT;
		if(s.GT!=0 && s.GT!=1){
			cout<<"Nhap lai: "<<endl;
			}
	}while(s.GT!=0 && s.GT!=1);

	cout<<"Nhap diem: ";
	cin>>s.Diem;
}

void nhapds(sinhvien sv[], int &n){
	
    	cout<<"Thong tin sinh vien thu "<<n+1<<": "<<endl;
        	nhapsv(sv[n]);
		n++;
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
            if(sv[i].Diem < sv[j].Diem){
                tem = sv[i];
                sv[i] = sv[j];
                sv[j] = tem;
            }
        }
    }
}
void timKiemten(sinhvien sv[], string ten, int n) {
    string ten;
    int kt = 0;
    for(int i = 0; i < n; i++) {
        strcpy(tenSV, a[i].ten);
        if(strstr(strupr(tenSV), strupr(ten))) {
            arrayFound[found] = a[i];
            found++;
        }
    }
    showStudent(arrayFound, found);
}
void timsv_caonhat(sinhvien sv[],int n){
	float max=sv[0].Diem;
	for(int i=1;i<n;i++){
		 if(sv[i].Diem > max){
		 	 max = sv[i].Diem;
			 }
		}
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
	for(int k=0;k<n;k++){
		if(sv[k].Diem==max){
			xuatsv(sv[k]);
			}
		}
}

void timsv_thapnhat(sinhvien sv[],int n){
	float min=sv[0].Diem;
		for(int i=1;i<n;i++){
		 if(sv[i].Diem < min){
		 	 min = sv[i].Diem;
			 }
		}
		cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
		for(int k=0;k<n;k++){
		if(sv[k].Diem==min){
			xuatsv(sv[k]);
			}
		}
}
int dem_nam(sinhvien sv[], int n){
	int dem=0;
		for(int i=0;i<n;i++){
		if(sv[i].GT==1){
			dem++;
			}
		}
	return dem;
}
void tim_diemtb_nam(sinhvien sv[],int n){
	float sum=0;
	for(int i=0;i<n;i++){
		if(sv[i].GT==1){
			sum=sum+sv[i].Diem;
			}
		}
	float tb=sum/dem_nam(sv,n);
	cout<<"Tong diem cua nam la: "<<tb<<endl;
	cout<<"Cac sinh vien nam la: "<<endl;
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
		for(int k=0;k<n;k++){
			if(sv[k].GT==1){
			xuatsv(sv[k]);	
				}
			}
}
int dem_nu(sinhvien sv[], int n){
	int dem=0;
		for(int i=0;i<n;i++){
		if(sv[i].GT==0){
			dem++;
			}
		}
	return dem;
}
void tim_diemtb_nu(sinhvien sv[],int n){
	float sum=0;
	for(int i=0;i<n;i++){
		if(sv[i].GT==0){
			sum=sum+sv[i].Diem;
			}
		}
		float tb=sum/dem_nu(sv,n);
	cout<<"Tong diem cua nu la: "<<tb<<endl;
	cout<<"Cac sinh vien nua la: "<<endl;
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
		for(int k=0;k<n;k++){
			if(sv[k].GT==0){
			xuatsv(sv[k]);		
				}
			}
} 


int main(){
	int n=0;
	sinhvien sv[100];
		int chon;
do{

	cout<<"\n-----------Menu--------------"<<endl;
	cout<<"1: Nhap danh sach sinh vien "<<endl;
	cout<<"2: Xuat danh sach sinh vien "<<endl;
	cout<<"3: Sap xep sinh vien theo ho ten "<<endl;
	cout<<"4: Sap xep sinh vien theo diem "<<endl;
	cout<<"5: Tim sinh vien co diem cao nhat "<<endl;
	cout<<"6: Tim sinh vien co diem thap nhat "<<endl;
	cout<<"7: Tim diem trung binh cua nam "<<endl;
	cout<<"8: Tim diem trung binh cua nu "<<endl;
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
			cout<<"3: Sap xep sinh vien theo ho ten: "<<endl;
			sx_ten(sv,n);
			xuatds(sv,n);
			break;
		case 4:
			cout<<"-------------------"<<endl;
			cout<<"4: Sap xep sinh vien theo diem: "<<endl;
			sx_diem(sv,n);
			xuatds(sv,n);
			break;
		case 5:
			cout<<"-------------------"<<endl;
			cout<<"5: Tim sinh vien co diem cao nhat: "<<endl;
			timsv_caonhat(sv,n);
			break;
		case 6:
			cout<<"-------------------"<<endl;
			cout<<"6: Tim sinh vien co diem thap nhat: "<<endl;
			timsv_thapnhat(sv,n);
			break;
		case 7:
			cout<<"-------------------"<<endl;
			cout<<"7: Tim diem trung binh cua nam: "<<endl;
			tim_diemtb_nam(sv,n);
			break;
		case 8: 
			cout<<"-------------------"<<endl;
			cout<<"8: Tim diem trung binh cua nu: "<<endl;
			tim_diemtb_nu(sv,n);
			break;
		default :
			cout<<"Vui long nhap cac so co trong menu: ";
		}
	}while(chon!=0);
 
	return 0;	
}

