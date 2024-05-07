#include <bits/stdc++.h>
using namespace std;

// TWO INSTANCES OF aNum created 
// class A{
//     public:
//     int aNum;
// };
// class B : public A{
//     public:
//     int bNum;
// };
// class C : public A{
//     public:
//     int cNum;
// };
// class D : public B, public C{
//     public:
//     int dNum;
// };
// int main(){
//     D nexa;
//     nexa.B:: aNum = 90;
//     nexa.C:: aNum = 100;
//     cout <<nexa.B:: aNum<<endl;
//     cout <<nexa.C:: aNum<<endl;
// }


//  USING VIRTUAL KEYWORD

class A{
    public:
    int aNum;
};
class B : virtual public A{
    public:
    int bNum;
};
class C : virtual public A{
    public:
    int cNum;
};
class D : public B, public C{
    public:
    int dNum;
};
int main(){
    D nexa;
    nexa.aNum = 90;
    cout <<nexa.aNum<<endl;
}