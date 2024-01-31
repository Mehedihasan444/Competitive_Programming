


#include <iostream>
using namespace std;

int main() {
    long long int a;
    cin >> a;
    int array[] = {1, 2, 3, 4, 5};
    long long int sum = 0;
    long long int steps = 0;
    
    for (long long int i = 1;; ) {
        sum += array[5 - i];
        if (sum >a)
        {
             sum -= array[5 - i];
           i++;
           continue;
        }
        
        steps++;
        if ( a-sum < array[5 - i])
        {
            i++;
        }
        if (sum==a)
        {
          cout << steps << endl;
          break;
        }
        
        
    }

  

    return 0;
}

