#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n, anton = 0, danik = 0;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];

        if (s[i] == 'A')
        {
            anton++;
        }
        else if (s[i] == 'D')
        {
            danik++;
        }
    }
    if (anton == danik)
    {
        cout << "Friendship" << endl;
    }

    else if (danik > anton)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Anton" << endl;
    }

    return 0;
}