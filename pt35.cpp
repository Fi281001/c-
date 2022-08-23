#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int sum=0;
	cin>>n;
for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) 
        	sum += i;
        	}
    	if(sum>=n/2)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
	}
        	
