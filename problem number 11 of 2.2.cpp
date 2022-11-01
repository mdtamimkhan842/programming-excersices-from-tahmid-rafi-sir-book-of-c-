#include <iostream>
using namespace std;
int main ()
{
    int n, arr[50], i, temp, j;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for (i=1; i<=n; i++)
    {
        for (j=i+1;  j<=n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }

    for (i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
