#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int m,n,s,t,h,v;
        cin>>m>>n>>s>>t>>h>>v;
        double out=m*n-s*t,in=s*t,total=m*n;
        double outh=v/out,totalh=v/total,ans;
        if(outh<=h){
            ans=outh;
        }
        else if(totalh>=h){
            ans=totalh;
        }
        else{
            ans=h;
        }
        printf("%.2f\n",ans);
    }
    return 0;
}
