#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n;
	cin>>k;
	long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
				}
	int s=0;
	for(int j=0;j<n;j++){
	s+=(a[j]*pow(10, n-j-1));
	}
	int sum;
	sum=s+k;
	stringstream ss;
	ss << sum;
	string str = ss.str();
	for(int k=0;k<str.length();k++){
		cout<<str[k]<<" ";
		}
	return 0;
}
