#include <iostream>
using namespace std;
int main ()
{

int n;
cout<<"Enter a number for variable N : ";
cin>>n;

int a = 5;
for ( int i = 1; i <= n; i++ )
{
    cout<< a << " ";
    a = a * 3;
}

    return 0;
}