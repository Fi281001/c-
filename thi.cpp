#include<iostream>
using namespace std;

struct QLSV{
	string hoten;
	string lop;
	string sbd;
	float dtb;
	QLSV *next;
};

void NhapSV(QLSV *&F, QLSV *p){
	if(F==NULL){
		F = p;
	}
	else{
		QLSV *q = F;
		while(q!=NULL){
			q = q->next;
		}
		q->next = p;
	}
}

void XOASV(QLSV *&F){
	QLSV *p = F;
	while(p!= NULL){
		if(p->dtb < 5){
			QLSV *q = p;
			p->next = p->next->next;
			delete q;
		}
		p = p->next;
	}
}

void SAPXEPSV(QLSV *&F){
	for(QLSV *p = F; p->next!=NULL; p=p->next){
		for(QLSV *q = p->next; q!=NULL; q=q->next){
			if(p->lop > q->lop){
				QLSV *t = new QLSV;
				t->hoten = p->hoten;
				t->lop = p->lop;
				t->dtb = p->dtb;
				t->sbd = p->sbd;
				
				p->hoten = q->hoten;
				p->lop = q->lop;
				p->dtb = q->dtb;
				p->sbd = q->sbd;
				
				q->hoten = t->hoten;
				q->lop = t->lop;
				q->dtb = t->dtb;
				q->sbd = t->sbd;
			}
		}
	}
}

void HienThi(QLSV *&F){
	QLSV *p = F;
	while(p!=NULL){
		cout<<"Danh sach sinh vien lop"<< p->lop<<endl;
		cout<<"Ho Ten: "<<p->hoten<<endl;
		cout<<"SBD: "<<p->sbd<<endl;
		cout<<"DTB: "<<p->dtb<<endl;
		cout<<"======================="<<endl;
	}
}

int main(){
	QLSV *F = NULL;
	int n;
	cin>>n;
	cin.ignore();
	string hoten;
	string lop;
	string sbd;
	float dtb;
	for(int i=0; i<n; i++){
		getline(cin, hoten);
		getline(cin, lop);
		getline(cin, sbd);
		cin>>dtb;
	
		QLSV *p = new QLSV;
		p->hoten = hoten;
		p->lop = lop;
		p->sbd = sbd;
		p->dtb = dtb;
		p->next = NULL;
		NhapSV(F, p);
		cin.ignore();
	}
	return 0;
}
