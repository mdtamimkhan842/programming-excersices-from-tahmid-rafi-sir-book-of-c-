#include <iostream>
using namespace std;
int main ()
{
    int x, y;
    cout<<"Enter the total fish : ";
    cin>>x;
    cout<<"Enter the grain : ";
    cin>>y;
    int result = x*3;

    if (result <= y)
    {
        cout<<" Fish can eat food"<<endl;
    }
    else
    {
        cout<<"Fish can not eat food"<<endl;
    }



    return 0;
}
