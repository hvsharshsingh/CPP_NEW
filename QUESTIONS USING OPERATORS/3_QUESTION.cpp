// Print the factorial of the given number N
# include <iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter the value of the given variable A : ";
    cin>>a;
    int PRODUCT = 1;
    for ( int i = 1; i <=a; i++ ){
        PRODUCT *= i;
    }
    cout<<"FACTORIAL OF THE GIVEN NUMBER IS : ";
    cout<<PRODUCT;
    return 0;
}