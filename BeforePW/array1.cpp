#include <iostream>
using namespace std;

int main()
{
  int a[50],i,n,sum=0;
  float avg;
  cout << "Enter the no of Elements: ";
  cin >> n;
  cout << "Enter the values: ";
  for(i=0;i<n;i++)
  {
    cin >> a[i];
  }
  for(i=0;i<n;i++)
  {
    sum = sum +a[i];
  }
  cout << "Sum is: " <<sum <<endl;
  avg =sum/n;
  cout << "Average is: " <<avg;
 return 0;
}