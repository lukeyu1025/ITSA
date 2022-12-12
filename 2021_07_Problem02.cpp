#include <iostream>
using namespace std;
int main() {
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        int arr[c];
        for(int j=0;j<c;j++)arr[j]=1;
        bool flag=true;
        int now=1;
        for(int j=0;j<c-1;j++){
            int tempa=0,tempb=0;
            if(flag==true){
                while(tempb<b){
                    now++;
                    if(now>c)now=0;
                    if(arr[now-1]==1)tempb++;
                }
                arr[now-1]=0;
                flag=false;
            }
            else{
                while(tempa<a){
                    now--;
                    if(now<1)now=c;
                    if(arr[now-1]==1)tempa++;
                }
                arr[now-1]=0;
                flag=true;
            }
        }
        int ans;
        for(int j=0;j<c;j++){
            if(arr[j]==1)ans=j+1;
        }
        cout<<ans<<endl;
    }

    return 0;
}
