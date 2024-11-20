#include<iostream>
#include<string>
using namespace std;
int main(){
int t;
cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a = s.substr(0,3);
        int sum1=0;
        int sum2=0;
        for (int i = 0; i < 3; i++)
        {
          sum1+=stoi(a.substr(i,1));
        }
        
        string b = s.substr(3);
 for (int i = 0; i < 3; i++)
        {
          sum2+=stoi(b.substr(i,1));
        }
        if (sum1==sum2)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    return 0;
}