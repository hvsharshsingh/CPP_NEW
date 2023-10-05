// Wap a program to reverse a given number
# include <iostream>
using namespace std;
int main (){
    int a;
    cout<<"Enter the value of the given variable A : ";
    cin>>a;
int rev = 0;
while (a!=0){
    int LD = a%10;
    rev *= 10;
    rev += LD;
    a /= 10;
}
    cout<<"REVERSE OF THE GIVEN NUMBER IS : ";
    cout<<rev;
    return 0;
}