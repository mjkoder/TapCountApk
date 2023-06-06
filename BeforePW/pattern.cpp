#include<iostream>
using namespace std;

int main() {
   int n;
   cout<<"enter the no in one row : ";
   cin>>n;
   int i=1;
   while(i<=n)
   {
    int asc=1; 
    while(asc<=n-i+1)
    {
      cout <<asc<<" ";
      asc++;
    }
    int star=1;
    while(star <=i-1)
    {
      cout <<"* *"<<" ";
      star++;
    }
    int dsc=n-i+1;
    while(dsc>=1)
    {
      cout << dsc<<" ";
      dsc--;
    }
    cout<<endl;
    i++;
   }
   return 0;
}