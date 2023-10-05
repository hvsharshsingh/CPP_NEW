# include <iostream>
using namespace std;
int main ()
{
   
   char ch;
   cout<<"Enter any Alphabet : ";
   cin>>ch;
   int x = (int) ch;
   
   if ( x >= 97 && x <= 122)
   {
    cout<<"It is an Lower Case alphabet";
   }

   else if (  x >= 65 && x <= 90 )
   {
    cout<<"It is an Upper Case alphabet";
   }

   if ( x >= 48 && x <= 57 )
   {
    cout<<"It is an Number";
   }

    return 0;
}