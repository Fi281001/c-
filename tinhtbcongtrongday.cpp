#include <bits/stdc++.h>
using namespace std;
double tbc(int s[], int n){ 
    float sum=0;
    float r;
    for(int i=0;i<n;i++)
        sum+=s[i];
    r=(double)sum/n;
    return(r);
}
int main(){
   int n;
  int s[100000];
int kq;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       scanf("%d",&s[i]);}
       
     
printf("%0.4f",tbc(s,n));
return 0;
}
