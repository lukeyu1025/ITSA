#include <iostream>  
using namespace std;  
int main() {  
   int n,m,temp=1,ans=1;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>m;
       for(;ans%m!=0;temp++){
            ans=10*ans+1;
       }
       cout<<temp<<endl;
       ans=1;
       temp=1;
   }
   return 0;S
}  
