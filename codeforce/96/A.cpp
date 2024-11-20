#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
// cout<<s[0]<<s[0+1]<<s[0+2]<<s[0+3]<<s[0+4]<<s[0+5]<<s[0+6]<<endl;
int c=0;
for (int i = 0; i < s.size(); i++)
{
    if ((s[i]==s[i+1])&&(s[i+1]==s[i+2])&&(s[i+2]==s[i+3])&&(s[i+3]==s[i+4])&&(s[i+4]==s[i+5])&&(s[i+5]==s[i+6]))
    {
        cout<<"YES"<<endl;
        c++;
        break;
    }
   
    
}
 if(c==0)
    {
        cout<<"NO"<<endl;
      
    }
    return 0;
}