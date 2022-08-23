#include<bits/stdc++.h>
using namespace std;

long long A[1005];
int main(){
	int n;
	cin>>n;
		A[1]=1;
	for(int i=2;i<=n;i++)
		if(i%2==0)
			A[i]=i+A[i-1];
		else
			A[i]=2*i+A[i-1];
			
		cout<<A[n]<<" ";
	return 0;
	}
