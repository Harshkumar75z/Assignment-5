//Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include <iostream>
using namespace std;
int main()
{
    int i,n=65;
    while(n<=122)
    {
        cout<<n<<char(n)<<endl;
        n++;
    }
}