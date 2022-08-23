
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, x, i;
	int a[100000];
	cin>>n>>x;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	if(a[i] >= x) 
		break;
	cout<<i;
	return 0;
}
