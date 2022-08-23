#include<bits/stdc++.h>
using namespace std;

struct SinhVien{	
	string hoten;
	string lop;
	string sbd;
	float dtb;
	SinhVien *next;
};
void Nhap(SinhVien *&F, int n){
	
	string hoten;
	string lop;
	string sbd;
	float dtb;
	for(int i=0; i<n; i++){
	
		getline(cin, hoten);
	
		getline(cin, lop);
	
		getline(cin, sbd);
	
		cin>>dtb;
	
		SinhVien *p = new SinhVien;
		p->hoten = hoten;
		p->lop = lop;
		p->sbd = sbd;
		p->dtb = dtb;
		p->next = NULL;
		
		if(F==NULL){
			F = p;
		}
		else{
			SinhVien *q = F;
		while(p!=NULL){
				q = q->next;
			}
			q->next = p;
		}
	}
}
void in(SinhVien *&F){
	SinhVien *p = F;
	while(p!=NULL){
		cout<<"Danh sach sinh vien lop"<< p->lop<<endl;
		cout<<"Ho Ten: "<<p->hoten<<endl;
		cout<<"SBD: "<<p->sbd<<endl;
		cout<<"DTB: "<<p->dtb<<endl;
		cout<<"======================="<<endl;
	}
}

int main() {
	SinhVien *F = NULL;
	int n;
	cin>>n;
	Nhap(F,n);
	in(F);
	
	return 0;
	}
