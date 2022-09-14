#include <iostream>
using namespace std;
int main(){
   int num;
   cin>>num;
   for(int i=0;i<num;i++){
    int cnt,rug[100001],len=0,max=0;
    cin>>cnt;
    for(int j=0;j<cnt;j++){
        int start,end;
        cin>>start>>end;
        if(end>max)max=end;
        for(int k=start;k<=end;k++){
            rug[k]=1;
        }
    }
    for(int j=0;j<=max;j++){
        if(rug[j]==1)len++;
    }
    cout<<len-2<<endl;
    }
}
