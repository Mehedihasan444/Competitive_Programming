#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int minute;
    string str;
};

bool compare(const Pair &a, const Pair &b)
{
    return a.minute < b.minute;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<Pair> pair;
        while (n--)
        {
            int m;
            string s;
            cin >> m >> s;
            pair.push_back({m, s});
        }
        sort(pair.begin(), pair.end(), compare);
        int time[2] = {0, 0}, c = 0, check = 0, sum = 0;

        for (int i = 0; i < pair.size(); i++)
        {
            if ((pair[i].str[0] == '1' && pair[i].str[1] == '1')&&sum==0)
            {
                cout << pair[i].minute << endl;
                check = 1;
                break;
            }

            else
            {
                if ((pair[i].str[0] == '1' && pair[i].str[1] == '0') && time[0] == 0)
                {
                    c++;
                    time[0] = pair[i].minute;
                }
                else if ((pair[i].str[0] == '0' && pair[i].str[1] == '1') && time[1] == 0)
                {
                    c++;

                    time[1] = pair[i].minute;
                }
                if ((time[0] != 0 && time[1] != 0)&&c==2)
                {
                    sum = time[0] + time[1];
                    // cout << time[0] + time[1] << endl;
                    // break;
                }
            }
            if ((pair[i].str[0] == '1' && pair[i].str[1] == '1') && sum > pair[i].minute)
            {
                cout << pair[i].minute << endl;
                check = 1;
                break;
            }
            if ((i == pair.size() - 1) && (time[0] != 0 && time[1] != 0))
            {
                cout << sum << endl;
            }
        }
        if ((check == 0 && (time[0] == 0 && time[1] == 0)) || (check == 0 && time[0] == 0) || (check == 0 && time[1] == 0))
        {
            cout << -1 << endl;
        }
    }

    return 0;
}