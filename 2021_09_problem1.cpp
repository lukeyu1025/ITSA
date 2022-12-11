#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        double x,y,dis;
        cin>>x>>y;
        dis=sqrt((x-10)*(x-10)+(y-10)*(y-10));
        dis=10-floor(dis);
        cout<<"dis:"<<dis<<endl;
        total+=dis;
    }
    cout<<total;
    return 0;
}
