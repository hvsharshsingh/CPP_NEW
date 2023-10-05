  // Wap to count digits of the gib=ven number
  # include <iostream>
  using namespace std;
  int main ()
  {
    int x;
    cout<<"Enter the value for variable X : ";
    cin>>x;

    int COUNT = 0;
    while ( x!=0){
        x = x/10;
        COUNT++;
    }
    cout<<"Total count of the given number is : ";
    cout<< COUNT;
    return 0;
  }  