#include<bits/stdc++.h>
using namespace std;

int main(){
	ofstream f;//khai bao f
	int n;
	cin>>n;
	string x;
	cin.ignore();
	f.open("vidufile");
	for(int i=1;i<=n;i++){
		getline(cin,x);
		f<<x<<endl;
	}
	f.close();
}
