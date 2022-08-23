#include<bits/stdc++.h>
using namespace std;
void inthuong(char *s){
	int n=strlen(s);
	for(int i=0;i<=n;i++) {
		if ( s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
}
int ten(char *s){
	int n=strlen(s);
	for(int i=n-1;i>=0;i--){
		if(s[i]==' ')
		{
			return i;
			}
		}
	}
void email(char *s, char *k){
	int j=0, n=strlen(s);
	k[j++]=s[0];
	for(int i=1;i < ten(s);i++){
		if(s[i]==' '&&s[i+1]!=' ')
			k[j++]=s[i+1];
		}
	for(int i=ten(s)+1;i<n;i++){
		k[j++]=s[i];
		}
	}
int main(){
	char s[100];
	char k[100];
	while(gets(s)){
		inthuong(s);
		ten(s);
		email(s,k);
		printf("%s",k);
		printf("@huscmail.edu.vn\n");
		}

