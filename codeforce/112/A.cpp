#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    // sort(a.begin(), a.end());
    // sort(b.begin(), b.end());
    // cout << a << " \n"
    //      << b << endl;
   


    if (a == b)
    {
        cout << 0 << endl;
    }
    else if (a > b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
