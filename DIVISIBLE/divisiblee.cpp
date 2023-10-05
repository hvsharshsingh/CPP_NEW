# include <iostream>
using namespace std;
int main ()
{

int x;
cout<<"Enter a number : ";
cin>>x;

if ( x % 5 == 0 && x % 3 == 0 )
{
    cout<<"THE NUMBER IS DIVISIBLE BY BOTH 5 & 3";
}

if ( x % 5 != 0 && x % 3 == 0 )
{
    cout<<"THE NUMBER IS DIVISIBLE BY 3 BUT NOT 5";
}

if ( x % 5 == 0 && x % 3 != 0 )
{
    cout<<"THE NUMBER IS DIVISIBLE BY 5 BUT NOT 3";
}

if ( x % 5 != 0 && x % 3 != 0 )
{
    cout<<"THE NUMBER IS NITHER DIVISIBLE BY 5 NOR 3";
}
return 0;
}