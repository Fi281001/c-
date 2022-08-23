#include<bits/stdc++.h>
using namespace std;

int main(){
	fstream f("vidufile");
	f.seekg(0,ios::end);
	cout<<"do dai cua file= "<<f.tellg();	
	return 0;
	}

