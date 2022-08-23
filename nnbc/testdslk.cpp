#include<bits/stdc++.h>
using namespace std;
struct NgayThang
{
	int Ngay;
	int Thang;
	int Nam;

};
struct SinhVien
{
	string HoTen;
	NgayThang NS;
	int GT;
	float Diem;
	SinhVien * Next;
};

typedef struct SinhVien * DSLKSV;

void KhoiTao(DSLKSV &Head, DSLKSV &Last){
	Head = Last = NULL;
}

SinhVien * NhapDL(){
	SinhVien *p = new SinhVien[1] ; //cap phat bo nho 
	cout<<"nhap sinh vien: "<<endl;
	fflush(stdin);
	cout << "Ho ten: " ;
	getline(cin, p->HoTen);
//	do{
//		cout<<"Nhap gioi tinh (0 la nu, 1 la nam): ";
//		cin>>p->GT;
//		if(p->GT!=0 && p->GT!=1){
//			cout<<"Nhap lai: "<<endl;
//			}
//		}while(p->GT!=0 && p->GT!=1);
//	cout << "Ngay sinh: " ; cin >> p->NS.Ngay >> p->NS.Thang >> p->NS.Nam;
	cout << "Diem: " ; cin >> p->Diem ; cin.ignore() ;
	cout<<endl;
	p->Next = NULL;
	return p;
}

void ThemDau(DSLKSV &Head, DSLKSV &Last, DSLKSV p){

	if (Head == NULL){
	Head = p;
	Last = Head;
	
	}
	else{
	
	p->Next = Head;
	Head = p;
	
	}

}
void ThemCuoi(DSLKSV &Head, DSLKSV &Last, DSLKSV p){
	if (Head == NULL){
		Head = p;
		Last = Head;
	}
	else{
		Last->Next = p;
		Last = p;
	}
}

void NhapDSLK(DSLKSV &Head, DSLKSV &Last){
	int n;
	cout<<"Nhap so luong sinh vien: ";
	cin>>n;
	for(int i=0; i < n; i++)
		ThemCuoi(Head, Last, NhapDL());
}


void in(SinhVien *p){
	cout<<setw(20)<<p->HoTen
//	<<setw(20)<<p->GT;
//	cout<<"  "<<setfill('0')<<setw(2)<<p->NS.Ngay<<"/"<<setfill('0')
//	<<setw(2)<<p->NS.Thang<<"/"<<setfill('0')<<setw(4)<<p->NS.Nam;
//	cout<<setfill(' ')<<setw(10)
	<<p->Diem<<endl;
}

void XuatDSLK(DSLKSV Head){
	DSLKSV p = Head;
	cout<<setw(20)<<"Ho Ten"<<setw(20)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
	while (p!=NULL){
		in(p); 
		p = p -> Next;
	}
}
SinhVien *TimKiemDSLK(DSLKSV Head, string ten){

	DSLKSV p = Head;
	while (p!=NULL){
		if(p->HoTen==ten){
			return p;
		}
		p = p -> Next;
	}

}
void Chen(DSLKSV &Head, DSLKSV &Last, DSLKSV p, DSLKSV q){
	
		if (q!=NULL && p!=NULL){
		p->Next = q->Next;
		q->Next = p;
		if(q==Last)
		
		Last = p;
		
		}

}
void ChenCMN(DSLKSV &Head, DSLKSV &Last){
	DSLKSV p;
	p=Head;
	cin.ignore();
	cout<<"nhap vi q: "<<endl;
	string ten;
	getline(cin,ten);
	SinhVien *sv;
	sv = TimKiemDSLK(Head, ten);
	Chen(Head, Last, NhapDL(), sv);
	
}
void XoaPhanTuDSLK(DSLKSV &Head, DSLKSV &Last, SinhVien * q){

		if(q !=NULL && q-> Next !=NULL){
		SinhVien * p = q->Next;
		q->Next = p -> Next;
		if(p->Next == Last)
		Last = q;
		
		free(p);
		
		}

}
void XoaCMN(DSLKSV &Head, DSLKSV &Last){
	DSLKSV p;
	p=Head;
	cin.ignore();
	cout<<"nhap vi q: "<<endl;
	string ten;
	getline(cin,ten);
	SinhVien *sv;
	sv = TimKiemDSLK(Head, ten);
	XoaPhanTuDSLK(Head, Last, sv);
	
}

int main(){
	SinhVien *head, *last;
	KhoiTao(head,last);
	int chon;
do{

	cout<<"--------------------------Menu------------------------------------"<<endl;
	cout<<"			 1:Nhap danh sach sinh vien "<<endl;
	cout<<"			 2:Xuat danh sach sinh vien "<<endl;
	cout<<"			 3:chen sinh vien "<<endl;
	cout<<"			 4:xoa sv"<<endl;
	cout<<"			 0:Thoat khoi chuong trinh "<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"			Vui long chon chuc nang: ";
	cin>>chon;
	switch(chon) {
		case 0: break;
		case 1:
			cout<<endl;
			cout<<"1: Nhap danh sach sinh vien: "<<endl;
			cout<<endl;
			NhapDSLK(head, last);
			break;
		case 2:
			cout<<endl;
			cout<<"2: Xuat danh sach sinh vien: "<<endl;
			cout<<endl;
			XuatDSLK(head);
			break;
		case 3:
			cout<<endl;
			cout<<"3: chen "<<endl;
			cout<<endl;
			ChenCMN(head,last);
			break;
		case 4:
			cout<<endl;
			cout<<"4: xoa "<<endl;
			cout<<endl;
			XoaCMN(head,last);
			break;
	
		default :
			cout<<"Vui long nhap cac so co trong menu: ";
		}
	}while(chon!=0);
 
	return 0;
}
