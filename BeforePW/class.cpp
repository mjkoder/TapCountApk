#include <iostream>
using namespace std;

class student
{
    int marks;
    public:
    void getmarks()
    {
        cout << "Enter the student marks" <<endl;
        cin >>marks;
    }
    void putmarks()
    {
        cout << "The student marks is" <<marks;
       // cout <<marks;
    }

};
int main()
{
    student s;
    s.getmarks();
    s.putmarks();
    return 0;
}