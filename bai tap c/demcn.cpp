#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin, str);
	int dem=0;
	int s=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='C'){
			dem++;
			s=s+dem;
		}
		else{
			dem=0;
		}
	}
	cout<<s;
}

