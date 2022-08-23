#include<bits/stdc++.h>
using namespace std;

char *thaythe(char str[]) {
	for(int i=0; i<strlen(str); i++)
		if(str[i]== ',') 
		str[i]=' ';
	return str;	
}
int main() {
	char str[100];
	gets(str);
	printf(thaythe(str));
	return 0;
	}
