#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s)){
		int max=0, i=0, temp=0;
		for(i; i<s.length(); i++){
			if(isalpha(s[i])||s[i]=='\'')
				temp++;
			else{
				if(temp>max)
					max=temp;
				temp=0;
			}	
		}
		cout<<max<<endl;
	}
}
