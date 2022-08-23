#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	long long s=pow(t, 2);
	//cout<<s<<endl;
	stringstream c;
	c<<s;
	string str=c.str();
	//cout<<str<<endl;
	string d="";
	string f="";
	if(str.length()%2==0){
		for(int i=0;i<str.length()/2;i++){	
			d=d+str[i];
			f=f+str[i+str.length()/2];
		}
	}
	else{
		for(int i=0; i<str.length()/2; i++){
			d=d+str[i];
			f=f+str[i+str.length()/2];
		}
		f+=str[str.length()-1];
	}
	//cout<<d<<"   "<<f<<endl;
	string my_str(d);
	long x = atoi(my_str.c_str());
	string my_str1(f);
	long x2 = atoi(my_str1.c_str());
	long x3=x+x2;
	if(x3==t){
		cout<<"YES";
		}
	else{
		cout<<"NO";
	}
}
