#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n],flag=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    if (a[i] ==1)
    {
        flag=1;
    }
    
}
if (flag == 0)
{
    cout<<"EASY"<<endl;
}
else
{
    cout<<"HARD"<<endl;
}



    return 0;
}