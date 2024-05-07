/*Here we have to go in a maze the only restriction is we can go right and down*/
#include <iostream>
using namespace std;
int MazePath(int stc,int str,int enc,int enr)
{
    if(str==enr || stc==enc) return 1;
    if(str==enr-1 && stc==enc-1) return 2;
    return (MazePath(stc,str+1,enc,enr)+MazePath(stc+1,str,enc,enr));
}
void PrintPath(int stc,int str,int enc,int enr,string s)
{
    if(str>enr || stc>enc) return;
    if(str==enr && stc==enc)
    {
        cout<<s<<endl;
        return;
    }
    PrintPath(stc+1,str,enc,enr,s+"R"); //Going Right
    PrintPath(stc,str+1,enc,enr,s+"D"); //Going Down
}
int main()
{
    int stc,str,enc,enr;
    cout<<"Enter starting column,staring row,end column,end row: ";
    cin>>stc>>str>>enc>>enr;
    cout<<"No. of ways to reach destination: ";
    cout<<MazePath(stc,str,enc,enr)<<endl;
    PrintPath(stc,str,enc,enr,"");
}

