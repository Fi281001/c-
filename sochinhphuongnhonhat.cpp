#include<bits/stdc++.h>
using namespace std;

int kt(int n)
{
 if(n==(int)sqrt(n) * (int)sqrt(n)) return true;
 else 
 	return false;
}
 
int min(int n,int a[]){
	int min=0;
	for(int i=0;i<n;i++){
		if(kt(a[i])==true){
		if (min > a[i])
            min = a[i];}
		break;
	}	
	return min;
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	cout<<min(n,a)<<" ";
	return 0;
	}
