#include <iostream>
using namespace std;
int main ()
{
    int cow,i, goat[50], n, sum=0;
    cout<<"Enter the cow amount : ";
    cin>>cow;
    cout<<"Enter the n value : ";
    cin>>n;
    cout<<"Enter the goat average amount : ";
    for (i=1; i<=n; i++)
    {
        cin>>goat[i];
        sum = sum+goat[i];
    }
    if (sum > cow)
    {
        cout<<"Yes, win the race "<<endl;
    }
    else
    {
        cout<<"He loss the race " <<endl;
    }

    return 0;
}
