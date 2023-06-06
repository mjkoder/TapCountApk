#include <iostream>
using namespace std;
int n;
int &test();
int main()
{
test()=5;  //n=5
cout <<n;
return 0;
}
int &test()
{
    return n;
}