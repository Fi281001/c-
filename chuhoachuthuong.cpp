#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while(getline(cin,s)){
		int dem=0, dem1=0;
		int n=s.length();
		for(int i=0;i<n;i++){
			if(s[i]>='A'&&s[i]<='Z')
				dem++; 
			else {
				if(s[i]>='a'&&s[i]<='z')
				dem1; }
		}
		if(dem>dem1) {
			for(int i=0;i<n;i++){
			if(s[i]>='A'&&s[i]<='Z')
				s[i]+=32; }
			}else {
				for(int i=0;i<n;i++){
				if(s[i]>='a'&&s[i]<='z')
				s[i]-=32; }
		}
			cout<<s<<endl;
		}
	}



