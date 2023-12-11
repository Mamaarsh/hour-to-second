#include <iostream>

using namespace std;

void seconde(void);

int main()
{
    seconde();
    cin.get();
    
    return 0;
}

void seconde(void)
{
    int h,m,s;
    cin >> h >> m >> s;
    
    int sec = 3600*h + 60*m + s;

    cout << h << ":" << m << ":" << s << " oclock is: " << sec << " second";
}