#include <iostream>
using namespace std;

int main()
{
  int a[10],i;
  cout << "Enter the values : ";
  for(i=0;i<10;i++)
  {
    cin >> a[i];
  }
  cout << "The values are :";
  cout << "\n";
  for(i=0;i<10;i++)
  {
    cout << a[i] << endl;
  }
 return 0;
}