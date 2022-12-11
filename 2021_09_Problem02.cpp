#include <iostream>
using namespace std;
int  main(){
    int arr[7][7];
    int x=1,y=1;
    string temp;
    for(int i=0;i<7;i++){
        getline(cin,temp);
        for(int j=0;j<7;j++){
            arr[i][j]=temp[j];
        }
    }
    getline(cin,temp);
    int end=-1;
    int cnt=0;
    for(int i=0;i<temp.length();i+=2){
        cnt++;
        if(temp[i]=='N'){
            if(arr[y][x]==48)y--;
        }
        if(temp[i]=='S'){
            if(arr[y][x]==48)y++;
        }
        if(temp[i]=='W'){
            if(arr[y][x]==48)x--;
        }
        if(temp[i]=='E'){
            if(arr[y][x]==48)x++;
        }
        if(arr[y][x]==35&&end==-1)end=cnt;
    }
    if(end!=-1){
        cout<<"Yes"<<endl;
        cout<<end<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
