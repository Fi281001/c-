#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long arr[1000];
	arr[0]=2;
	arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
		}
	for(int j=0;j<=n;j++){
		cout<<arr[j]<<" ";
		}
		return 0;
	}
