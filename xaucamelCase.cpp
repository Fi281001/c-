#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		int n=s.length();
		int dem=0;
		for(int i=0;i<n;i++){	
			if(s[i] >=65 &&s[i] <=90)
					dem++;}
	cout<<dem+1<<endl;}
	return 0;
}
