#include <iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter the value of the given variable A : ";
    cin>>a;
    int REV = 0;
    while ( a!=0 ){
        int LD = a%10;
        REV *= 10;
        REV += LD;
        a /= 10;
    }
    cout<<"THE REVERSE OF THE GIVEN NUMBER IS : ";
    cout<<REV;
    return 0;
}