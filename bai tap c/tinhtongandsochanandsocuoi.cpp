#include<bits/stdc++.h>
using namespace std;
int duongcuoi(long a[], int n)
{
   for (int i=n-1; i>=0; i--)
   {
      if (a[i]>0)
         return a[i];
   }
   return 0;
}
int tong(long a[], int n){
	int 	s=0;
	for(int i=0;i<n;i++){
		s=s+a[i];
		}
	return s;
	}
int sochan(long a[], int n){
	int dem=0;
		for(int i=0;i<n;i++){
		if(a[i]%2==0){
			dem++;
		}
		}
		return dem;
	}
	
int main(){
	int n;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
}
	int b=tong(a,n);
	int c=sochan(a,n);
	int d=duongcuoi(a,n);
	cout<<b<<" "<<c<<" "<<d;
	}
