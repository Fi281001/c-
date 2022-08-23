#include<bits/stdc++.h>
using namespace std;
int ten(char *s){
	int n=strlen(s);
	for(int i=n-1;i>=0;i--){
		if(s[i]==' ')
		{
			return i;
			}
		}
	}
void layten(char *s, char *k) {
	int j=0;
	k[j++]=s[0];
	for(int i=ten(s)+1;i<=strlen(s);i++){
		k[j++]=s[i];
		}
		}
int main(){
		char s[100];
		char k[10];
			gets(s);
			printf("%s",layten(s,k));   
		return 0;
		}
		
		
