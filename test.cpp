#include<bits/stdc++.h>
using namespace std;
int globalVar = array[3];
int &doSomething()
{
int array[] = { 1, 2, 3, 4, 5 };

return globalVar;
}
int main(){
	globalVar = array[3];
	
	 cout<<doSomething();
	return 0;
}	
