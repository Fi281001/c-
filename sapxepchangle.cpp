#include<bits/stdc++.h>
using namespace std;
int sosanh(int a, int b)
{
		if((a%2==0 && b%2==0) || (a%2!=0 && b%2!=0))
			return a<b; 
		if(a%2==0)
			return 1;
		else
			return 0;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,sosanh);
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	return 0;
}
