#include <iostream>
using namespace std;
int main ()
{
    int a, b, c;
    cout<<"Enter the alam cow's value : ";
    cin>>a>>b>>c;
    int result = a+b+c;
     cout<<"Enter the karim cow's value : ";
    cin>>a>>b>>c;
    int result2 = a+b+c;
    if (result>result2)
    {
        cout<<"Alam cow's is very high"<<endl;
    }
    else
    {
        cout<<"Karim cow's is very high"<<endl;
    }

    return 0;
}
