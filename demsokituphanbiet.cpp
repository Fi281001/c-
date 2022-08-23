#include <bits/stdc++.h>
using namespace std;
string chuyenxau(string s){
	string t;
	int lent=s.length();
	for(int i=0; i<lent; i++)
		if(isalpha(s[i]))	if(s[i]>=65 && s[i]<=90) t+=s[i]+32;
							else t+=s[i];
	return t;
}
int kiemtra(string s, int a){
	for(int i=0; i<a; i++)
		if(s[i]==s[a]) return 1;
	return 0;
}
void demxau(string s){
	int dem=1;
	for(int i=1; i<s.length(); i++)
		if(kiemtra(s, i)==0) dem++;
	cout<<dem<<endl;
}
int main(){
	string s;
	getline(cin, s);
	string t=chuyenxau(s);
	demxau(t);
	return 0;
}
