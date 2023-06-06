#include <bits/stdc++.h>
using namespace std;

void daay(int dd,int mm,int yy)
{
    int a,c,v,x,y,z,l,m;
    l=mm/2;
    c=y/4;
    x=c*366+(y-c)*365;
    y=x%1826;
    if(mm%2!=0 && yy%4!=0)
    {
        z=y+((l+1)*31+(l-1)*30+28);
    }
    else if(mm%2==0 && yy%4!=0)
    {
        z=y+(l*31+(l-1)*30+28);
    }
    else if(mm%2!=0 && yy%4!=0)
    {
        z=y+((l+1)*31+(l-1)*30+29);
    }
    else if (mm%2==0 && yy%4!=0)
    {
        z=y+(l*31+(l-1)*30+29);
    }
    a=z%7;
    switch(a)
    {
        case 1: cout<<"MONDAY";
                break;
        case 2: cout<<"TUESDAY";
                break;        
        case 3: cout<<"WEDNESDAY";
                break;
        case 4: cout<<"THURSDAY";
                break;
        case 5: cout<<"FRIDAY";
                break;
        case 6: cout<<"SATURDAY";
                break;
        case 0: cout<<"SUNDAY";
                break;                                
    }

}

int main()
{
    int day,month,year;
    cin>>day>>month>>year;

    daay(day,month,year);
}