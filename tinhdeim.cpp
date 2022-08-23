#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void xuly(string s) {
	int tong=0;
	 int n=s.length();
	for(int i=0;i<n;i++) {
		if(s[i]== '+')
			tong=+5000;
		if(s[i]== '-')
			tong=-5000;
		}
		int k=0;
		k+=tong;
		cout<<tong<<endl;
	}
int main() {
	string s;
	
	int k;
	while(getline(cin, s)) {
		if(s.length()!=0) 
		xuly(s);
			
		else
			break;
			}
		if(k==0)
			cout<<"Correct";
	else  cout<<"In_Correct";
	
	}
