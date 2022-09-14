#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        double x,ans=0,clk;
        cin>>m>>x;
        clk=x;
        for(int j=0;j<m;j++){
            if((j+1)%2==0) ans+=clk/2;
            else ans+=clk;
            clk+=0.5*x;
        }
        printf("%.2f\n",ans);
    }
}
