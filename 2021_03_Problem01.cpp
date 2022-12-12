#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int s[n],d[n];
    int timeline[24];
    for(int i=0;i<24;i++)timeline[i]=0;
    for(int i=0;i<n;i++){
        cin>>s[i]>>d[i];
        for(int j=s[i]-1;j<=d[i]-1;j++){
            timeline[j]++;
        }
    }
    int max=0;
    for(int i=0;i<24;i++){
        if(timeline[i]>=max)max=timeline[i];
    }
    cout<<max<<endl;
    return 0;
}
