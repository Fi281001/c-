w#include <bits/stdc++.h>
using namespace std;
static long k=0;
void xulixau(string s){
	long tong=0;
	int n=s.length();
	for(int i=0; i<n; i++)
	{
		if(s[i]=='+') tong+=5000;else
		if(s[i]=='-')tong-=5000;
	}
	k+=tong;
	cout<<tong<<endl;
}
int main(){
	string s;
	while(getline(cin, s)){
		xulixau(s);
	}
	if(k==0) cout<<"Correct";else
		cout<<"In_correct";
	return 0;
}
