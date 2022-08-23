#include<iostream>
using namespace std;


int main(){
	int n,m;
	cin>>n;
	cin>>m;
	long long a[n][m];
	for(int i=0; i<n;i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n;i++){
		long long tong = 0;
		for(int j=0; j<m; j++){
			tong = tong + a[i][j];
		}
		cout<<tong<<endl;
	}

	
	return 0;
}
 
