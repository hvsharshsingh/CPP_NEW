# include <iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter the value for the given variable X : ";
    cin>>x;

    int COUNT = 0;
    while ( x != 0 ){
        x = x/10;
        COUNT++;
    }
      cout<<"The total count of the entered number is : ";
      cout<< COUNT;
    return 0;
}