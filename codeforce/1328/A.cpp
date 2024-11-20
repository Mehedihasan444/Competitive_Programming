
#include <iostream>
using namespace std;
int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int temp = 0;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else if (a < b)
        {
            temp = b - a;
            cout << temp << endl;
        }
        else
        {
            long long int d = a / b;
            temp = a - (b * d);
            long long int r = b - temp;

            cout << r << endl;
        }
    }

    return 0;
}