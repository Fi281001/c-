#include<bits/stdc++.h>
using namespace std;
bool kt(int n){
	if(n<=1)	return false;
	if(n<=3)	return true;
	
	if(n%2==0||n%3==0) return false;
	for(int i=5;i*i<=n;i=i+6)
		if(n%i==0||n%(i+2)==0) return false;
		
		return true;}
 int main() 
 { 
      char str[500]; 
      int i=0,j,tong=0,n; 
     
      gets(str); 
      while(i<=strlen(str)-1) 
          if(str[i]<='9' && str[i]>='0') 
           { 
            j=i; 
            n=0;            
           while(j<=strlen(str)-1 && (str[j]<='9' && str[j]>='0')) 
             {                kt(i); 
                j++; 
             } 

             tong+=n; 
             i=j; 
            } 
           else i++; 
      printf("%d",tong); 
      return 0;      }
