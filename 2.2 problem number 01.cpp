#include <iostream>
using namespace std;
int main ()
{
    int c;
    cin>>c;
    if (c<0)
    {
        cout<<"Aquire"<<endl;
    }
    else if (c<100)
    {
        cout<<"Liqued"<<endl;
    }
    else
    {
        cout<<"Gas"<<endl;
    }

    return 0;
}
