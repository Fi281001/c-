#include <bits/stdc++.h>
using namespace std;

class Date{
	private: int d, m, y;
	public:
		void Nhap();
		void Xuat();
		bool kiemtranam();
		int songaycuathang();
		bool kiemtra();
		void tinhngay();
};
void Date::Nhap(){
			cout<<"Nhap ngay thang nam: ";
			cin>>d>>m>>y;
		}
void Date::Xuat(){
			cout<<d<<"/"<<m<<"/"<<y<<endl;
		}
bool Date::kiemtranam(){
	if(y%400==0||(y%4==0&&y%100!=0)) return true;
	return false;
}
int Date::songaycuathang(){
	int day;
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day=30;
			break;
		case 2:
			if(kiemtranam()) day=29;
			else day=28;
			break;
	}
	return day;
}
bool Date::kiemtra(){
	if(y<=0||m<=0||d<=0) return false;
	if(m>12) return false;
	if(d>songaycuathang()) return false;
	return true;
}
void Date::tinhngay(){
	d++;
	if(d>songaycuathang()){
		d=1;
		m++;
		if(m>12)
		{
			m=1;
			y++;
		}
	}
	cout<<d<<"/"<<m<<"/"<<y<<endl;
}
int main(){
	Date a;
	a.Nhap();
	cout<<"Ngay thang nam ban da nhap la:\n";
	a.Xuat();
	if(a.kiemtra()){
		cout<<"Ngay ke tiep la: ";
		a.tinhngay();
	}
	else cout<<"Ngay ban nhap khong dung.";
	return 0;
}
