#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> hoten;
	string s;
	while(getline(cin, s)){
		if(s=="***") break; 
		int pos = s.find_last_of(" ");//find_last_of tính kho?ng trang 
		string ten = s.substr(pos+1,s.length()-1);// substr láy kí tu trong chuoi
		string ho = s.substr(0,pos);
		for(int i=0;i<ten.length();i++) 
			ten[i]=toupper(ten[i]);
		hoten.push_back(ten+" "+ho);// push_back thut lui doi vitri
	}
	sort(hoten.begin(),hoten.end());// sort sap xep
	for(int i=0;i<hoten.size();i++) cout << hoten[i] <<"\n";
	return 0;	
} 
