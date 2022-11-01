#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter the per person cada : ";
    cin>>a;
    cout<<"Enter the sport total cost : ";
    cin>>b;
    cout<<"Enter the some financial amount : ";
    cin>>c;
    int result = (b+c)*6;
    int result2 = a*6;
    if (result2>=result)
    {
        cout<<"Yes, they will be going to her selected spot : "<<endl;
    }
    else
    {
        cout<<"Yes, they will be not going to her selected spot : "<<endl;

    }

    return 0;
}
