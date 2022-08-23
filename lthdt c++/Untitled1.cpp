#include<bits/stdc++.h>
using namespace std;

class Diem
{
	private:
		int x,y;
	public:
	   void nhap()
	   {
	   	  cout<<"nhap hoanh do:";
	   	  cin>>x;
	   	  cout<<"nhap tung do:";
	   	  cin>>y;
		}
		void xuat()
		{
		   cout<<"\nhoanh do:"<<x;
		   cout<<"\ntung do:"<<y;	
		}	
		int operator ==(Diem d1)
		{
			if ((x==d1.x)&&(y==d1.y))
			  {
			  return 1; }
			else
			  return 0;  
		}
		float operator !()
	 	{  
		  return sqrt (x*x+y*y);
			  
		}
};
int main()
{
	Diem d,d1;
	cout<<"nhap d:";
	d.nhap();
	cout<<"nhap d1:";
	d1.nhap();

	cout<<"\nso sánh";
	if(	d==d1)
	cout<<"\nbang nhau";
   cout<<"\nkhoang cach:";
   float n;
   //n=d!;
   cout<<!n;
   return 0;
	
}
