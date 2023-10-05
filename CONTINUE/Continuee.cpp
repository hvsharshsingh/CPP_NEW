// If you want to skip a perticular round
// Print numbers from 1 - 20 except 3 and 9

# include <iostream>
using namespace std;
int main ()
{

for ( int i = 1; i <= 20; i++ )
{
    if ( i == 3 )
    continue;
    if ( i == 7 )
    continue;
    cout << i << " ";
}

    return 0;
}