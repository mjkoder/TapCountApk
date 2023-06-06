#include <iostream>
using namespace std;
void swap(int x,int y)
{
    int read;
    read = x;
    x=y;
    y=read;
    cout << "After Swap :" <<x <<" " <<y<<endl;
}

int main()
{
    int a,b;
    cout <<"Enter one Number : ";
    cin >>a;
    cout <<"Enter another Number : ";
    cin >>b;
    cout << "Before Swap :" <<a <<" " <<b<<endl;
    swap(a,b);
    return 0;

}