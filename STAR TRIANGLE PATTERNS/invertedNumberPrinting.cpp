#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the valude of N : ";
    cin>>n;
    cout<<"INVERTED STAR PATTERN IS"<<endl;
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <=i ; j++){
            cout<<char(11);
        }
        cout<<endl;
    }
    return 0;
}