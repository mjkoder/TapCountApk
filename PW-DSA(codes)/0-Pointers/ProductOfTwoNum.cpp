/*Write a program to find the product of two numbers using pointers.*/

#include <iostream>
using namespace std;

int main()
{
     int a=5,b=17,prd=1;

     int *p1=&a;
     int *p2=&b;
     int *pr=&prd;

     *pr = (*p1)*(*p2);
     cout<<"Product is "<<*pr;
 }


/*Q3
int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << " " << a << " " << b;

ANS--: 11 10 11
*/

/*Q4
 int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;

ANS- HERE a gets the value of b
*/

/*
int a = 10, b = 20;
int *ptr;
*ptr = 5;
cout<<a<<endl; ANS: 10
cout<<*ptr<<endl;    ANS: 5
cout<<ptr;  ANS: It will print random garbage address

The program is correct and will compile but might result in runtime error.This is
because ptr will have a garbage address which might even point to a location which
does not belong to our program and hence might result in Segmentation Fault when we
are trying to access it.
*/  