#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000001];
	int dem=0;
	
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int max=0;
	for(int i = 0; i < n; i++)
		if (max < a[i])
            max = a[i];
    for(int i = 0; i < n; i++)
    	if(a[i]== max) 
			dem++;
	cout<<max<<" "<<dem;
	return 0;	
	}
