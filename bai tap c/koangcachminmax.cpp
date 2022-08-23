
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
		int max=a[0];
		int min=a[0];
		int vt1=0;
		int vt=0;
	 for (int i = 1; i < n; i++){
	        if (max < a[i]){
	            max = a[i];
	            vt1=i;
				}
	        if(min > a[i]){
		            min = a[i];
		            vt=i;
					}
		    }
	cout<<abs(vt-vt1);
	return 0;
	}
