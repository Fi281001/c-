#include<bits/stdc++.h>
using namespace std;
void nhap(string s[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"nhap s thu "<<i+1<<" :"<<endl;
        fflush(stdin);
        getline(cin,s[i]);
    }
}
void xuat(string s[],int n){
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
		}
	}
string leng(string s[],int n){
	int max=0;
	int index=0;
	for(int i=0;i<n;i++){
		if(s[i].length() > max){
			max= s[i].length();
			index=i;
			}
		}
	return s[index];
}
void timkiem(string s[], int n){
	cout<<"nhap chuoi muon tim kiem: "<<endl;
	string s1;
	getline(cin,s1);
	bool ktr=false;
	
	for(int i=0;i<n;i++){
		if(s[i].compare(s1)==0){
			cout<<s[i]<<endl;
			ktr=true;
			}
		}
	if(ktr==false){
		cout<<"ko tim thay"<<endl;
		}
}
void sx(string s[], int n){
	string temp;
   for (int i = 0; i< n; i++)
   {

      for (int j= i+ 1; j < n; j++)
      {
         if (s[i].length() > s[j].length())
         {
            temp = s[i];
           s[i] = s[j];
            s[j]= temp;
      }
      }
   }
    for (int k = 0; k< n; k++)
	  cout<<s[k]<<" ";
}
void xoa(string s[],int n)
{
 int k;
 cout<<"nhap vao vi tri can xoa"<<endl;
 cin>>k;
 for(int i=k;i<n;i++)
  s[i]=s[i+1]; 
 n=n-1; 
 cout<<"chuoi sau khi xoa la: "<<endl;
 xuat(s,n);   
}

int main(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	string s[100];
	nhap(s,n);
	cout<<"----hien thi------"<<endl;
	xuat(s,n);
	cout<<"----tim kiem chuoi----"<<endl;
	timkiem(s,n);
	cout<<"---ham tim chuoi co nhieu tu nhat trong mang--"<<endl;
	cout<<"chuoi co nhieu tu nhat la: "<<leng(s,n)<<endl;
	cout<<"---chuoi sau khi sap xep la: "<<endl;
	sx(s,n);
	cout<<endl;
	cout<<"---xoa vi tri bat ki---"<<endl;
	xoa(s,n);

	return 0;
}
