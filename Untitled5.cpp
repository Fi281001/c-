#include <bits/stdc++.h>
using namespace std;
int main(){

 int a[20], len, i = 0, j, k;
char  s[20];
 while(cin>>s){
 len = strlen(s);
 for(i = 0; i< len; i++)
 {
 if(s[i] == 'I')
 a[i] = 1;
 if(s[i] == 'V')
 a[i] = 5;
 if(s[i] == 'X')
 a[i] = 10;
 if(s[i] == 'L')
 a[i] = 50;
 if(s[i] == 'C')
 a[i] = 100;
if(s[i] == 'D')
 a[i] = 500;
 if(s[i] == 'M')
 a[i] = 1000;}

 k = a[len-1];
 for(i = len-1; i >0 ; i--)
 {
 if(a[i] > a[i-1])
 k = k - a[i-1];
 else if(a[i] == a[i-1] || a[i] < a[i-1])
 k = k + a[i-1];
 }
 cout<<k;
 }
 return 0;
} 
