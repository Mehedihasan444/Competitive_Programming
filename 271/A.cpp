#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;

   
    while (true)
    {
     
        y++;

  
        int a = y % 10;
        int b = (y / 10) % 10;
        int c = (y / 100) % 10;
        int d = (y / 1000) % 10;

    
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
