#include<bits/stdc++.h>
using namespace std;

int main(){
	int i;
	string s;
	cout<<"nhap s: "<<endl;
	getline(cin,s);
	cout<<"tach ten: "<<endl;
	int pos = s.find_last_of(" ");//find_last_of tính kho?ng trang 
	string ten = s.substr(pos+1,s.length()-1);// substr láy kí tu trong chu
	cout<<ten;
	return 0;
}
