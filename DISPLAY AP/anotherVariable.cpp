# include <iostream>
using namespace std;
int main ()
{


int n;
cout<<"Enter a number for n : ";
cin>>n;

int a = 4;
for ( int  i = 1; i <= n; i++ )
{
 cout<< a << " ";   
 a = a + 3;
}

    return 0;
}