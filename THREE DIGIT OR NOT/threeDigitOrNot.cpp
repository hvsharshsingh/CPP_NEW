# include <iostream>
using namespace std;
int main ()
{

     int x;
     cout<<"Enter an number : ";
     cin>>x;

     if ( x > 9 & x < 100 & x > 9 )
     {
        cout<<"The number is of two digits";
     }

     if ( x < 1000 & x > 99 )
     {
        cout<<"The number is of three digits";
     }

    return 0;
}