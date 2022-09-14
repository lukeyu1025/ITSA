//未完成
#include <iostream>
using namespace std;
int main(){
    int n,m,max=0;
    string str1,str2;
    cin>>n>>m>>str1>>str2;
    int line[n];
    for(int i=0;i<n;i++)line[i]=-1;
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<m;j++){
            if(str1[i]==str2[j]&&flag==true){
                line[i]=j;
                flag=false;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<line[i]<<endl;
    }
}
