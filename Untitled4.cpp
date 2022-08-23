#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,m;
	cin>>n;
	cin>>m;
	long long a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;i<m;j++){
			cin>>a[i][j];
			}
		}
	for(int i=0;i<n;i++){
		long long s=0;
		for(int j=0;j<m;j++){
			s=s+a[i][j];
			}
	cout<<s<<endl;
	}
	
	return 0;
 }
