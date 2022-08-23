#include<iostream>
using namespace std;
long GiaiThuakepchan( long n){
	long gt=1;
	for(int i=1;i<=n;i++){
		if(i%2==0)
			gt=gt*i;
	}
	return gt;
}
long GiaiThuakeple(long n){
	long gt=1;
	for(int i=1;i<=n;i++)
		if(i%2!=0)
			gt=gt*i;
	return gt;
}
int main(){
	long a;
	cin>>a;
	if(a==0 ||a==1)
		cout<<"1"<<endl;
	if(a>1&&a%2==0){
		cout<<GiaiThuakepchan(a)<<endl;
	}
	if(a>1&&a%2!=0)
		cout<<GiaiThuakeple(a)<<endl;
		
	return 0;
}
