#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        //xoa ky tu trang dau
        while(str[0]==' ')
            str.erase(0,1);
        //xoa ky tu trang cuoi
        while(str[str.length()-1]==' ')
            str.erase(str.length()-1,1);
        //xoa giua
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]==' ' && str[i+1]==' ')
            {
                 str.erase(i,1);
                 i--;
            }

        }
        cout<<str<<endl;

    }
}
