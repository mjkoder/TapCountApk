#include <iostream>
using namespace std;


int main() {
    int n,a,b,prd=1,sum=0;
    cin>>n;
    while(n>0)
    {
        a=n%10;
        prd=prd*a;
        sum=sum+a;
        n/=10;
    }
    cout<<"sum is : " <<sum<<endl;
    cout <<"product is : "<<prd<<endl;

    b=prd-sum;
    cout<<"Final Answer is "<<b;

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
