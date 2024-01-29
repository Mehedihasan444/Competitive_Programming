#include <iostream>
using namespace std;
int main()
{
    int a[5][5],temp[2],c=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           cin>>a[i][j];
           if(a[i][j]==1){
temp[0]=i; 
temp[1]=j; 
           }
        }
        
    }
    
if (temp[0]>2)
{
    c=c+(temp[0]-2);
}
else
{
    c=c+(2-temp[0]);
}

if (temp[1]>2)
{
    c=c+(temp[1]-2);
}
else
{
     c=c+(2-temp[1]);
}


    

cout << c << endl;
    return 0;
}