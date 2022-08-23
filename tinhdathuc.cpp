 #include<bits/stdc++.h>
using namespace std;

long long mu(int n, int a){//tính n^a
	long long r=1;
	for(int i=1; i<=a;i++)
		r=r*n;
	return r;
	}
int A[11];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	long long X=0; int ni=0, ai=0;
	for(int i=0;i<n;i++){
		ai=A[i]%10;
		ni=A[i]/10;
		X=X+mu(ni,ai);}
	cout<<X;
	return 0;
	}
