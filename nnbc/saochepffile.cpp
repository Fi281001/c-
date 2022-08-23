#include<bits/stdc++.h>
using namespace std;

int main(){
		
		fstream fnguon("vidufile",ios::in | ios::binary | ios::ate);
		
		fstream fdich("vidufile2",ios::out | ios::binary);
		char * buf ;
		int n;
		if(fnguon.is_open())
		{
		n=fnguon.tellg();
		buf = new char[n];
		fnguon.seekg(0,ios::beg);
		fnguon.read(buf,n);
		
		}
		fdich.write(buf, n);
		
		cout<<"Do dai file: "<<n<<endl;
		cout<<"Chuoi trong file: "<<endl;
		for(int i=0; i<n;i++)
		cout<<buf[i];
		
		fnguon.close();
		fdich.close();
	}

