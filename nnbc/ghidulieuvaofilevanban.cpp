#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

	fstream fnguon;
	fnguon.open("DATA1", ios::out);
	fnguon<<"truong Dai hoc Khoa hoc \n";
	fnguon << "Khoa Cong nghe Thong tin \n";
	fnguon.close();
	 return 0;

}
