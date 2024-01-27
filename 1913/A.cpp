#include <iostream>
#include <string>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--){
       string ab;
       cin>>ab;
       if(ab[0]=='0')
       {
           cout<<-1<<endl;
           continue;
       }
 
           for(int j=1;j<ab.size();j++){
                if(ab[j]=='0'){
                    if(j==ab.size()-1){
                        cout<<-1<<endl;
                    }
           continue;
       }
               
               string a = ab.substr(0,j);
               string b = ab.substr(j);
               if(stoi(a)>=stoi(b)){
                   cout<<-1<<endl;
                   break;
               }
               else{
                        cout<<a<<" "<<b<<endl;
                        break;
               }
           
           }
        
           
       
   }
 
 
    return 0;
}