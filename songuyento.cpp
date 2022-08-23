#include<bits/stdc++.h>
using namespace std;

bool kt(int n){
	if(n<=1)	return false;
	if(n<=3)	return true;
	
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i=i+6)
		if(n%i==0||n%(i+2)==0) return false;
		
		return true;}
void tach(char str){
	int i=0;
	int j;
 while(i<=strlen(str)-1) 
          if(str[i]<='9' && str[i]>='0') 
           { 
            j=i; 
            n=0;            
            } 
           else i++; 
}	
int main(){
 char str[500]; 
 
	return 0;}
		
