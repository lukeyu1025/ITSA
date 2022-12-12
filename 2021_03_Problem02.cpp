#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int n,total=0;
        cin>>n;
        for(int j=0;j<=n/3;j++){
            for(int k=0;k<=(n-j*3)/2;k++){
                int one=n-j*3-k*2,onep=1,twop=1,threep=1,temp=one+k+j,tempp=1;
                for(int q=1;q<=one;q++)onep*=q;
                for(int q=1;q<=k;q++)twop*=q;
                for(int q=1;q<=j;q++)threep*=q;
                for(int q=1;q<=temp;q++)tempp*=q;
                total+=tempp/onep/twop/threep;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
