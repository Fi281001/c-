#include<bits/stdc++.h>
#include<iostream>

using namespace std;
struct SinhVien{
	string hoten;
	string lop;
	string sbd;
	float dtb;
	SinhVien *next;
};
void Nhap_SV(SinhVien *&f, int n){
	
	string hoten;
	string lop;
	string sbd;
	float dtb;
	for(int i=0; i<n; i++){
		cout<<"Nhap ho ten sinh vien thu "<<i<<": ";
		cin.ignore();
		getline(cin, hoten);
		cout<<"Nhap lop: ";
		cin.ignore();
		getline(cin, lop);
		cout<<"Nhap so bao danh: ";
		cin.ignore();
		getline(cin, sbd);
		cout<<"Nhap diem trung binh: ";
		cin>>dtb;
	
		SinhVien *p = new SinhVien;
		p->hoten = hoten;
		p->lop = lop;
		p->sbd = sbd;
		p->dtb = dtb;
		p->next = NULL;
		
		if(f==NULL){
			f = p;
		}
		else{
			SinhVien *q = f;
			while(q->next != NULL)
				q = q->next;
			q->next = p;
		}
	}
}

void in(SinhVien *f){
	for(SinhVien *q = f; q!=NULL; q = q->next){
		cout<<q->hoten<<"\t"<<q->lop<<"\t"<<q->sbd<<"\t"<<q->dtb<<endl;
	}
}
void xoaSinhVien(SinhVien *&f){
	if (f!=NULL){
		SinhVien *p=f;
		while (p->next!=NULL){
			if (p->next->dtb<5){
				SinhVien *q=p->next;
				p->next = q->next;
				delete q;
							}
			else p=p->next;
		}
		if (f->dtb<5){	
			SinhVien *q = f; 
			f = f->next; 
			delete q;
		}	
	}	
}
int main() {
	int n;

	cout<<"Nhap so luong sinh vien: "; cin>>n;
	SinhVien *f;
	Nhap_SV(f, n);
	cout<<"Danh sach sinh vien da nhap: "<<endl;
	xoaSinhVien(f);
	cout<<"Danh sach sinh vien co diem trung binh lon hon 5: "<<endl;
	in(f);
	return 0;
}
