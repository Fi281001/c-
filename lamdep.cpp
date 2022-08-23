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
string inhoa(string s){
	for(int i=0; i<s.length(); i++)
	if(s[i]>=65 && s[i] <=90) s[i]+=32;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' '&& s[i+1]!=' ')
		{
			if(s[i+1]>=97 && s[i+1]<=122)
				s[i+1]-=32;
			}
		}
		return s;
	}
int main(){
	string s;
	while(getline(cin,s))
		cout<<inhoa(xoagiua(xoadaucuoi(s)))<<endl;
	return 0;
	
	}
