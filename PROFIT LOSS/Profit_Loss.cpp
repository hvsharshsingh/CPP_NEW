# include <iostream>
using namespace std;
int main ()
{

    int CP, SP;
    cout<<"Enter the COST PRICE of the item : ";
    cin>>CP;
    cout<<"Enter the SELLING PRICE of the item : ";
    cin>>SP;

    if ( SP>CP )
    {
        cout<<"YOU HAVE MADE PROFIT"<<endl<<"Your total PROFIT is : "<< SP - CP<<endl;
    }

    if ( SP<CP )
    {
        cout<<"YOU HAVE MADE LOSS"<<endl<<"Your total LOSS is : "<< CP - SP<<endl;
    }

    if ( SP == CP )
    {
        cout<<" YOU HAVE MADE NO PROFIT & NO LOSS "<<endl;
    }
    return 0;
}