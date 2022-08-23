#include <bits/stdc++.h>
using namespace std;
void xoayxau(string &s, int n){
	n %= s.size();
	reverse(s.begin(), s.begin()+n);
	reverse(s.begin()+n, s.end());
	reverse(s.begin(), s.end());
}

int main(){
	int n; cin>>n;	cin.ignore();
	string s;
	getline(cin, s);
	if (n==0) cout<<s<<endl;
	else
	{
		xoayxau(s, n);
		cout<<s<<endl;
		
	}
	return 0;
}

