#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100001];
	int n;
	cin >> n ;
	for (int i = 0 ; i < n ; i++)
	cin >> a[i] ;
	for (int i = 0 ; i < n ; i++ )
		if (a[i] >= 5 && a[i] <= 7 )
		cout << a[i] << " " ;
return 0;}
