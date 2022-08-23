#include<bits/stdc++.h>
using namespace std;
int nhonhat(int a[],int n) {
		 int min = a[0];
		    for (int i = 1; i < n; i++)
		        if (min > a[i])
		            min = a[i];
		    return min;
	}
int lonnhat(int a[] , int n) {
		int max = a[0];
	    for (int i = 1; i < n; i++)
	        if (max < a[i])
	            max = a[i];
	    return max;
	}
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
	int b=lonnhat(a,n)-nhonhat(a,n);
	cout<<b;
	}
