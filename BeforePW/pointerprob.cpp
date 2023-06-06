#include <iostream>
using namespace std;

void update(int *a,int *b) {
    int c,d;
    c=*a+*b;
    if(*a>*b)
    {
        d=*a-*b;
        printf("%d\n%d",c,d);
    }
    else
    {
        d=*b-*a;
        printf("%d\n%d",c,d);
    }
    
    
    // Complete this function    
}

int main() {
    int a,b;
    cin>>a>>b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}