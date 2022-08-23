#include<bits/stdc++.h>
using namespace std;
string xoadaucuoi(string s){
	while(s[0]==' '){
			s.erase(s.begin() + 0);}
	while(s.length()-1==' ') {
			s.erase(s.begin() + s.length()-1);
		}
	return s;
	}
string xoagiua(string s){
	for(int i=0;i<s.length();i++){
		if(s[i]==' '&&s[i+1]==' ')
			{s.erase(s.begin() + i);
			i--;}
			}
		return s;
	}
int main(){
	string s;
	while(getline(cin,s)){
		cout<<xoadaucuoi(xoagiua(s));}
	return 0;

	}
