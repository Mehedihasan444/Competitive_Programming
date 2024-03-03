#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    char str[n];
    for (int i = 0; i < n; i++)
    {

        str[i] = tolower(s[i]);
    }
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (str[i] == alphabet[j])
            {
                alphabet[j] = '1';
                c++;
            }
        }
    }
    if (c == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}