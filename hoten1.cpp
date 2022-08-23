#include<bits/stdc++.h>
using namespace std;
string trichten(string s)
{
	int i,t=0;
	string ten;
	for( i=s.length();s[i]!=' ';i--);
	for(int k=i+1;k<s.length();k++)
	{
		ten+=s[k];
	}
	for(int j=0;j<ten.length();j++)
	{
		if(ten[j] >='a' && ten[j]<='z')
		 ten[j]=toupper(ten[j]);
	}
	return ten;
} 
string hodem(string s)
{
	int k;
	string hodem;
	for( k=s.length();s[k]!=' ';k--);
	for(int i=0;i<k;i++)
	{
		hodem+=s[i];	
		if(i==0|| hodem[i-1]==' ' && isalpha(hodem[i]))
		{
			hodem[i]=toupper(hodem[i]);
		}
	}
	return hodem;
}
int main ()
{
	string st,arr[100],tam;
	int num=0;
	while(getline(cin,st))
	{
		string a="";
		if(st=="***")
		break;
		a = trichten(st)+' '+hodem(st);
		arr[num] = a ;
		num++;
	}
	sort(arr, arr + num);
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<endl;
	}

}
