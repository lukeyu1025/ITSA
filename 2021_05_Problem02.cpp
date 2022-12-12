#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int n;
        cin>>n;
        int ans=n-1;
        while(ans>=1){
            int now=0;//0~n-1
            int arr[n];
            for(int j=0;j<n;j++)arr[j]=1;
            for(int j=0;j<n;j++){
                int temp=0;
                while(temp<ans){
                    now++;
                    if(now>=n)now-=n;
                    if(arr[now]==1)temp++;
                }
                cout<<endl;
                arr[now]=0;
            }
            if(now==0){
                cout<<ans<<endl;
                break;
            }
            ans--;
        }
    }
    return 0;
}
