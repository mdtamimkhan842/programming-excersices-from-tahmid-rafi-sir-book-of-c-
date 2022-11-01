#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int x, p;
    cout<<"Enter the value : ";
    cin>>x;
    cout<<"Enter the another value ";
    cin>>p;


    int result = pow(x, 2);

    if (result == p)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }


    return 0;
}
