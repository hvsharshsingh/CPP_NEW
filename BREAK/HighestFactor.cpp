# include <iostream>
using namespace std;
int main ()
{

     int n;
     cout<<"Enter a nuber for varible N : ";
     cin>>n;
     int f = 1; // I will store highest factor into it
     for ( int i = 1; i <= n/2; i++ )
     {
        if ( n % i == 0 ) f = i;
     }

     cout<<f;
     return 0;
}