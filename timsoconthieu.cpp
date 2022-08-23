
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int b[n];
	for(int i=a[0]; i<=a[n-1]; i++){
		b[i]=i;
	}
	int j=0;
		cout<<"so con thieu: ";
	for(int i=a[0]; i<=a[n-1]; i++){
		while(b[i]<a[j]){
					cout<<b[i]<<" ";
			i++;
		}
		if(b[i]==a[j]) j++;
	}
	cout<<"\nmang sau khi them: ";
	for(int i=a[0]; i<=a[n-1]; i++){
		cout<<i<<" ";
	}
	return 0;
}
