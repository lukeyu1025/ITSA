#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int peice=1;
        for(int j=1;j<=m;j++){
            peice+=j;
        }
        cout<<peice<<endl;
    }
}
