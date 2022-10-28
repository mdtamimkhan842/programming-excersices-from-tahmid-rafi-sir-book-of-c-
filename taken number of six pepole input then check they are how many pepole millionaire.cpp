#include <iostream>
using namespace std;
int main ()
{
    int n,arr[500], i,c=0;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>arr[i];
        if (arr[i]>=1000000)
        {
            c++;
        }
    }
    cout<<"Number of millionaires : " <<c<<endl;


    return 0;
}
