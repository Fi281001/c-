#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	long long s=t*t;
	stringstream c;
	c<<s;
	string str=c.str();
	string d="";
	string f="";

	if(str.length()%2==0){
			int h=2;
	for(int i=0;i<str.length()/2;i++){
	
		d=d+str[i];
		f=f+str[str.length()-h];
		h--;
		}}
	else{
			int h=str.length()/2+1;
		for(int i=0;i<(str.length()/2)+1;i++){
		f=f+str[str.length()-h];
		h--;
		}
		for(int i=0;i<str.length()/2;i++){
			d=d+str[i];
			}
		}
	string my_str(d);
int x = atoi(my_str.c_str());
	string my_str1(f);
int x2 = atoi(my_str1.c_str());
	int x3=x+x2;
	if(x3==t){
		cout<<"yes";
		}
	else{
		cout<<"no";
	}
}

