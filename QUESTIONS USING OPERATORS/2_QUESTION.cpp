// Wap to print the sum of digits of the given number
# include <iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter the value for the given variable X : ";
    cin>>x;

    int SUM = 0;
    while ( x!=0 ){
        int LD = x%10;
        x /= 10;
        SUM += LD;
    }
    cout<<"THE SUM OF THE GIVEN NUMBER IS : ";
    cout<<SUM;
    return 0;

}