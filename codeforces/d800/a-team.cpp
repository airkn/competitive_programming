#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,s=0;
    cin >> n;
    for (int i=0;i<n;i++)
    {
       cin >> a >> b >> c;
       if((a+b+c)>=2)
            s++;
    }
    cout << s;
    return 0;
}