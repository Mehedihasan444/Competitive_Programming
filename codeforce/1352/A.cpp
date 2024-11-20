#include <iostream>
#include <vector>
using namespace std;

vector<int> getRoundValue(int num)
{
    vector<int> v;
    int place = 1;
    while (num > 0)
    {
        int remainder = num % 10;
        if (remainder > 0)
        {
            v.push_back(remainder * place);
        }
        num /= 10;
        place *= 10;
    }
    return v;
};
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        vector<int> result = getRoundValue(arr[i]);
        cout << result.size() << endl;
        for (int j = 0; j < result.size(); j++)
        {
            cout << result[j] << " ";
        }
        cout << endl;
    }

    return 0;
}