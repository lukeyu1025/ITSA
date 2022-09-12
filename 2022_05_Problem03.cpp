#include <iostream>  
using namespace std;  
int main() {  
   int num;
   cin>>num;
   for(int i=0;i<num;i++){
       int n[4],ans=0;
       cin>>n[0]>>n[1]>>n[2]>>n[3];
       for(int j=0;j<=2;j++){
           for(int k=j+1;k<=3;k++){
               if(n[j]>n[k])ans++;
           }
       }
       if((ans%=2)==0){cout<<"A"<<endl;}
       else{cout<<"B"<<endl;}
   }
   return 0;
}
