#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    cout<<"Enter the cm value : ";
    cin>>a;
    cout<<"Enter the inch value : ";
    cin>>b;
    int c = a/100;
    int d = b*0.0254;
    int result = 3.1416*c*c;
    int result2 = 3.1416*d*d;
    if (result > result2)
    {
        cout<<"result is : "<<result<<endl;
    }
    else
    {
        cout<<"result2 is : " <<result2 <<endl;
    }


    return 0;
}
