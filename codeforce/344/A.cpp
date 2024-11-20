#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[n*2];

    for (int i = 0; i < n*2; i++)
    {
        cin >> s[i];
    }

    int c = 1;
    for (int i = 0; i < (n*2)-1; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}
