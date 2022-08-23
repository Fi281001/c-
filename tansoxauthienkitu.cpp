#include<bits/stdc++.h>
using namespace std;

string xoa(string s){
	string a;
	int lent=s.length();
	for(int i=0; i<lent; i++){
		if(isalpha(s[i])||isdigit(s[i]))
			a+=s[i];
	}
	return a;
}

void sapxep(string &s){
	int lent=s.length();
	sort(s.begin(), s.begin()+lent);
}
int dem(string &s, int a){
	int dem=0, lent=s.length();
	for(int i=0; i<lent; i++){
		if(s[i] == s[a]){
			dem++;
		}
	}
	return dem;
}
bool kt(string &s, int a){
	
	for(int i=0; i<a; i++)
		if(s[i] == s[a]){
			return true;
		}
	return false;
}
void ham(string &s){
	for(int i=0; i<s.length(); i++){
		
		if(i==0)
			cout<<s[i]<<"\t"<<dem(s,i)<<endl;
		else
			if(kt(s,i)==0)
				cout<<s[i]<<"\t"<<dem(s,i)<<endl;
	}
}

int main(){
	string s;
	getline(cin, s);
	string a=xoa(s);
	sapxep(a);
	
	ham(a);
	return 0;
}
