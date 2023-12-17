//Display this GP - 3,12,48,.. upto ‘n’ terms
#include <iostream>
using namespace std;
int main()
{
  int a=3,i,n;
  cout<<"Enter Number : ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
      cout<<a<<endl;
      a = a * 4;
  }
}