#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[100000000]; 
	gets(s);
	int d=0,c=0;
	int n=strlen(s);
	for(int i=0;i<n;i++)
		if(s[i]=='A'){
			 d=i;
			break;
		}
	for(int i=n;i>=0;i--)
			if(s[i]=='Z'){
				c=i;
				break;
				}
	cout<<c-d+1<<endl;
	}
