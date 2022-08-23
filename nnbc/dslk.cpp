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
	do{
		cout<<"Nhap gioi tinh (0 la nu, 1 la nam): ";
		cin>>p->GT;
		if(p->GT!=0 && p->GT!=1){
			cout<<"Nhap lai: "<<endl;
			}
		}while(p->GT!=0 && p->GT!=1);
	cout << "Ngay sinh: " ; cin >> p->NS.Ngay >> p->NS.Thang >> p->NS.Nam;
	cout << "Diem: " ; cin >> p->Diem ; cin.ignore() ;
	cout<<endl;
	p->Next = NULL;
	return p;
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
	cout<<setw(20)<<p->HoTen<<setw(20)<<p->GT;
	cout<<"  "<<setfill('0')<<setw(2)<<p->NS.Ngay<<"/"<<setfill('0')
	<<setw(2)<<p->NS.Thang<<"/"<<setfill('0')<<setw(4)<<p->NS.Nam;
	cout<<setfill(' ')<<setw(10)<<p->Diem<<endl;
}

void XuatDSLK(DSLKSV Head){
	DSLKSV p = Head;
	cout<<setw(20)<<"Ho Ten"<<setw(20)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
	while (p!=NULL){
		in(p); 
		p = p -> Next;
	}
}

float timDiemCaoNhat(DSLKSV Head){
	DSLKSV p = Head;
	float max = p->Diem;
	while (p!=NULL){
		if (p->Diem > max){
			max = p->Diem;	
		}
		p = p -> Next;
	}
	return max;
}

float timDiemThapNhat(DSLKSV Head){
	DSLKSV p = Head;
	float min = p->Diem;
	p = p->Next;
	while (p!=NULL){
		if (p->Diem < min){
			min = p->Diem;
		}
		p = p -> Next;
	}
	return min;
}

void TimKiemMax(DSLKSV Head){
	DSLKSV p = Head;
	int max = timDiemCaoNhat(Head);
	cout<<"Danh sach sinh vien co diem cao nhat la: "<<endl;
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
	while (p!=NULL){
		if (p->Diem == max){
			in(p);
			cout<<endl;
		}
		p = p -> Next;
	}
}
void TimKiemMin(DSLKSV Head){
	cout<<"Danh sach sinh vien co diem thap nhat la: "<<endl;
	DSLKSV p = Head;
	int min = timDiemThapNhat(Head);
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
	while (p!=NULL){
		if (p->Diem == min){
			in(p);
			cout<<endl;
		}
		p = p -> Next;
	}
}
int DemNam(DSLKSV Head){
	DSLKSV p;
	p = Head;
	int dem=0;

	while (p!=NULL){
		if(p->GT==1){
			dem++;
			}
	p = p -> Next;
}
return dem;
}

int DemNu(DSLKSV Head){
	DSLKSV p;
	p = Head;
	int dem=0;

	while (p!=NULL){
		if(p->GT==0){
			dem++;
			}
	p = p -> Next;
}
return dem;
}
float SumNam(DSLKSV Head){
	DSLKSV p;
	p = Head;
	int sum=0;
	while (p!=NULL){
		if(p->GT==1){
			sum=sum+p->Diem;
			}
	p = p -> Next;
}
	return sum;
}
float SumNu(DSLKSV Head){
	DSLKSV p;
	p = Head;
	int sum=0;
	while (p!=NULL){
		if(p->GT==0){
			sum=sum+p->Diem;
			}
	p = p -> Next;
}
	return sum;
}
void Diem_tb_nam(DSLKSV Head){
	DSLKSV p;
	p = Head;
	float tbNam=0;

	cout<<"Danh sach sinh vien nam co diem tb la: "<<endl;
	cout<<endl;
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
		while (p!=NULL){
		if(p->GT==1){
			in(p);
			}
	p = p -> Next;
	}
	tbNam=SumNam(Head)/DemNam(Head);
	cout<<"diem tb cua nam la: "<<tbNam<<endl;
}
void Diem_tb_nu(DSLKSV Head){
	DSLKSV p;
	p = Head;
	float tbNu=0;

	cout<<"Danh sach sinh vien nu co diem tb la: "<<endl;
	cout<<endl;
	cout<<setw(20)<<"Ho Ten"<<setw(10)<<"Gioi Tinh"<<setw(12)<<"Nam Sinh"<<setw(10)<<"Diem TB"<<endl;
		while (p!=NULL){
		if(p->GT==0){
			in(p);
			}
	p = p -> Next;
	}
	tbNu=SumNu(Head)/DemNu(Head);
	cout<<"diem tb cua nu la: "<<tbNu<<endl;
}
void HoanVi(DSLKSV sv1, DSLKSV sv2){
	string ten=sv1->HoTen;
	 sv1->HoTen=sv2->HoTen;
	 sv2->HoTen=ten;
	 
	 int gt=sv1->GT;
	 sv1->GT=sv2->GT;
	 sv2->GT=gt;
	 
	NgayThang ns=sv1->NS;
	 sv1->NS=sv2->NS;
	 sv2->NS=ns;
	 
	 float diem=sv1->Diem;
	 sv1->Diem=sv2->Diem;
	 sv2->Diem=diem;
	 
}
void sx_ten(DSLKSV Head)
{
	DSLKSV p;DSLKSV q;
	for( p=Head;p!=NULL;p=p->Next)
	 {
	  for(q=p->Next;q!=NULL;q=q->Next)
	  {
	    if(p->HoTen > q->HoTen)
	     {
			HoanVi(p,q);
	 	 	}
	 	}
	}
	XuatDSLK(Head);
	}
	
void sx_Diem(DSLKSV Head)
{
	DSLKSV p=Head;DSLKSV q;
	for( p=Head;p!=NULL;p=p->Next)
	 {
	  for(q=p->Next;q!=NULL;q=q->Next)
	  {
	    if(p->Diem > q->Diem)
{
	    HoanVi(p,q);
	  }
	 }
	}
XuatDSLK(Head);
}

int main(){
	SinhVien *head, *last;
	KhoiTao(head,last);
	int chon;
do{

	cout<<"--------------------------Menu------------------------------------"<<endl;
	cout<<"			 1:Nhap danh sach sinh vien "<<endl;
	cout<<"			 2:Xuat danh sach sinh vien "<<endl;
	cout<<"			 3:sap xep sinh vien theo ho"<<endl;
	cout<<"			 4:sap xep sinh vien theo diem"<<endl;
	cout<<"			 5:Tim danh sach sinh vien co diem cao nhat "<<endl;
	cout<<"			 6:Tim danh sach sinh vien co diem thap nhat "<<endl;
	cout<<"			 7:Tim danh sach diem trung binh cua nam "<<endl;
	cout<<"			 8:Tim danh sach diem trung binh cua nu "<<endl;
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
			cout<<"3: sap xep sinh vien theo ho "<<endl;
			cout<<endl;
			sx_ten(head);
			break;
		case 4:
			cout<<endl;
			cout<<"4: sap xep sinh vien theo Diem "<<endl;
			cout<<endl;
			sx_Diem(head);
			break;
		case 5:
			cout<<endl;
			cout<<"5: Tim danh sach sinh vien co diem cao nhat: "<<endl;
			cout<<endl;
			TimKiemMax(head);
			break;
		case 6:
			cout<<endl;
			cout<<"6: Tim danh sach sinh vien co diem thap nhat: "<<endl;
			cout<<endl;
			TimKiemMin(head);
			break;
		case 7:
			cout<<endl;
			cout<<"7: Tim danh sach sinh vien diem trung binh cua nam: "<<endl;
			cout<<endl;
			Diem_tb_nam(head);
			break;
		case 8: 
			cout<<endl;
			cout<<"8: Tim danh sach sinh vien diem trung binh cua nu: "<<endl;
			cout<<endl;
			Diem_tb_nu(head);
			break;
		default :
			cout<<"Vui long nhap cac so co trong menu: ";
		}
	}while(chon!=0);
 
	return 0;
}
