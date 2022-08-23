#include <iostream>
using namespace std;

int demchuoi(string s, string key){
	int dem=0;
	for (int i=0; i<s.length(); i++) {
		if (s[i] == key[0]){
			int kt = 0;
			i++;
			for(int j=1; j<key.length(); j++){
				if (s[i] != key[j]){
					kt = 1;
					break;
				}else {
					i++;
				}
			}
			if (kt == 0)
				dem++;
		}
	}
	return dem;
}

int main()
{
	string s, key;
	cout<<"Chuoi: ";
	getline(cin, s);
	cout<<"Tu: ";
	getline(cin, key);
	int dem;
	dem=demchuoi(s, key);
	cout<<dem;
	return 0;
}
