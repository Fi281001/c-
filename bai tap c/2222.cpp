#include <iostream>
#include <math.h>
bool test(int a, int b, int c){
	if(a+b>c && a+c>b && b+c>a && (pow(a, 2) +pow(b, 2) == pow(c, 2)))
	{
		return true;
	}
	return false;
}

int main()
{
	int dem=0, k;
	for(int i = 3; i <= 98; i++)
	{
		for(int j=i+1; j<=99; j++)
		{	
			k=(int)sqrt(pow(i, 2) + pow(j, 2));
			if((float)sqrt(pow(	i, 2) + pow(j, 2))==k && k <= 100)
			{
				if(test(i, j, k)) {
					std::cout << "a: "<< i << " b: "<< j << " c: "<< k << std::endl;
					dem++;				
				}
			}
		}	
	}
	std::cout<<"so hinh: "<<dem<<std::endl;
	std::cout<<"tam giac co a = 60: "<<std::endl;
		for(int m=61; m<=99; m++)
		{
			for(int n= m+1; n<=100; n++)
			{
				if(test(60, m, n)) {
					std::cout << "a: 60 " << " b: "<< m << " c: "<< n << std::endl;				
				}
			}
		}	
	
	return 0;
}
