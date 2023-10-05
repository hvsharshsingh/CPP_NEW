# include <iostream>
using namespace std;
int main ()
{

// Composite or not 
    int n;
    cout<<"Enter a number for variable N : ";
    cin>>n;
     bool flag = true; // Here true means prime number from the beigning 
     for ( int i = 2; i <= n / 2; i++)
     {
        if ( n % i == 0 )
        {
            flag = false; // Here false mean it is an composite number
            break;
        }
     } 

     if ( flag == true )
     {
        cout<<"The number is PRIME NUMBER";
     } 

     else {
        cout<<"The number is COMPOSITE NUMBER";
     }
        return 0;
}