#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
	int n;
		cin>>n;
		long a[100];
		a[0]=2;
		a[1]=1;
		for(int i=2;i<=n;i++){
		 	a[i]=a[i-1]+a[i-2];
		 }	
		 cout<<a[n]<<endl;
		t--;}
		}
