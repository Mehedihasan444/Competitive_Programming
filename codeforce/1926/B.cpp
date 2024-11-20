#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        if (n == 2)
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[i][j] == '1')
                    {
                        c++;
                    }
                }
            }
            if (c == n * n)
            {
                cout << "SQUARE" << endl;
            }
            
        }
        else
        {
            int b = 0;
            int flag=0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {

                    if (a[i][j] == '1')
                    {
                        b = i;
                        flag=1;
                        break;
                    }
                }
                if (flag==1)
                {
                    break;
                }
            }
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[b][i] == '1')
                {
                    c++;
                }
            }
            int d = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[b + 1][i] == '1')
                {
                    d++;
                }
            }
            if (c == d)
            {
                cout << "SQUARE" << endl;
            }
            else
            {
                cout << "TRIANGLE" << endl;
            }
        }
    }

    return 0;
}