#include <bits/stdc++.h>
using namespace std;
void Digit(int num,int * f,int *l)
{
   *l=num%10;
   while(num>9)
   {
    num=num/10;
   }
   *f=num;
   return;
}
int main()
{
   int a,first,last;
   cin>>a;

   Digit(a,&first,&last);
   cout<<"first: "<<first<<" last: "<<last;
   return 0;
}