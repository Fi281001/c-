#include<bits/stdc++.h>
using namespace std;
int main(){
	int s1,s2,s3;
	cout<<"nhap s1, s2, s3:";
	cin>>s1>>s2>>s3;
	int h=sqrt((s1*s2)/s3);
	int a=s1/h;
	int b=s2/h;
	int sum=(a+b+h)*4;
	cout<<sum;
	return 0;
	}
