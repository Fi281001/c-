#include<bits/stdc++.h>
void InThuong(char *str)
{
	for ( int i = 0; i < strlen(str); i++)
	{
		if ( str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
}
int ten(char *str)
{
	for ( int i = strlen(str) - 1; i >= 0; i--)
	{
		if ( str[i] == ' ')
		{
			return i;
		}
	
	}
}
void Email(char *str, char *str1 )
{
	int j = 0;
	str1[j++] = str[0];
	
	for ( int i = 1; i < ten(str); i++)
	{
		if ( str[i] == ' ' && str[i+1] != ' ')
		{
			str1[j++] = str[i+1];
		}
	}
	for ( int i = ten(str) + 1; i <= strlen(str); i++)
	{
		str1[j++] = str[i];}
	}
int main()
{
	
	char str[81];
	char str1[81];
	
	while(gets(str))
	{
	 // in thuong
	InThuong(str);
	//ten(str);
	Email(str,str1);
	printf("%s",str1);
	printf("@huscmail.edu.vn\n");
	
	}
}
