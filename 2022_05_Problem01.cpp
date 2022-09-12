#include<iostream> 
using namespace std; 
int main(){ 
    int num; 
    cin>>num; 
    for(int i=0;i<num;i++){ 
        int cnt,height[51]={0},length=0; 
        cin>>cnt; 
        for(int j=0;j<cnt;j++){ 
            int start,end,tall; 
            cin>>start>>end>>tall; 
            if(end>length)length=end; 
            for(int k=start;k<=end;k++){ 
                if(height[k]<tall)height[k]=tall; 
            } 
        } 
        for(int j=0;j<length;j++){ 
            cout<<height[j]<<" "; 
        } 
        cout<<height[length]<<endl; 
    } 
}  
