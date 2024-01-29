#include <iostream>
using namespace std;
int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        char s[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> s[i];
        }
        if (s[1] == '+')
        {
            c++;
        }
        else if (s[1] == '-')
        {
            c--;
        }
    }
    cout << c << endl;
    return 0;
}