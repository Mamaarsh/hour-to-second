#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(int j=1;j<n;j++)
    {
        if(b[0]<b[j])
        {
            b[0] = b[j];
            a[0] = a[j];
        }
    }
    cout << a[0];
    

    return 0;
}