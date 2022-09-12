#include <iostream>  
using namespace std;  
int main() {  
   int n,m;
   cin>>n;
   for(int i=0;i<n;i++){
       int temp=1,ans=1;
       cin>>m;
       while((ans%=m)!=0){
           ans*=10;
           ans++;
           temp++;
       }
       cout<<temp<<endl;
   }
   return 0;
}  
