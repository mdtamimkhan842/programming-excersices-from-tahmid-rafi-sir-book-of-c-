#include <iostream>
using namespace std;
int main ()
{
    int n, i, max = 0, arr[50];
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for (i=1; i<=n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<"Maximum value : "<<max<<endl;

    return 0;
}
