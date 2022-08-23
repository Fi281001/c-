#include<bits/stdc++.h>
using namespace std;
int kt(string str[]){
	int j;
	for(int i=0;i<j;i++){
		if(str[i]==str[j]){
			return 0;
			}	
		}
	return 1;
}
void nhap(string str[],int &n){
	for(int i=0;i<n;i++){
		cin.ignore();
	cout<<"nhap chuoi "<<i+1<<": "<<endl;
	getline(cin,str[i]);
	while(kt(str)==0){
			cout<<"nhap lai"<<endl;
			getline(cin,str[i]);
		}
}
}
void xuat(string str[],int n){
	for(int i=0;i<n;i++){
		cout<<str[i]<<endl;
		}
	}

int main(){
	int n;
	cout<<"nhap n"<<endl;
	cin>>n;
	string str[100];
	cout<<"nhap chuoi"<<endl;
 	nhap(str,n);
	cout<<"xuat chuoi"<<endl;
	xuat(str,n);
	
	return 0;
}

