#include<bits/stdc++.h>
int demtu(char s[]){
	int dem(s[0]!=' ');
	for(int i=0;i<strlen(s)-1;i++){
			if(s[i]==' '&&s[i+1]!=' '&&s)
			{
				dem++;
				}
			}
			return dem;
	
}
int main(){
	char s[100]; 
	
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	 {
		gets(s);
		
		printf("%d\n", demtu(s));
	}	
		return 0;
		}
		
