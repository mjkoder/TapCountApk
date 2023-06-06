#include <iostream>
#include <cmath>
using namespace std;
class abc
{
    int a,b;
    public:
    void large()
    {
        cout << "Largest Number : "<<endl;
        if(a>b)
        {
            cout <<a;
        }
        else
        {
            cout <<b;
        }
    }
    void getab()
    {
        cout << "Enter the values of a and b"<<endl;
        cin >>a>>b;
        putab();
    }
    void putab();
};
void abc ::putab()
{
    cout <<"Values of a and b" <<endl;
    cout <<a <<" "<<b <<endl;
}
int main()
{
    abc s;
    s.getab();
    s.large();
    return 0;

}