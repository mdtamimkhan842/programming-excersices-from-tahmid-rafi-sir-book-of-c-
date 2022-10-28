#include <iostream>
using namespace std;
int main()
{
    int ticket, taka,c=0, i;
    cin>>ticket>>taka;//100 10
    int arr[taka];
    for (i=1; i<ticket; i=i+10)
    {
        if (ticket%arr[i]==0)
            c++;
    }
    cout<<c<<endl;

    return 0;
}
