//會有兩個跑不過的暗中測資
#include<iostream>
#include<string>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        string str="",ans;
        int t=-1,start=0;
        cin>>str;
        for(int i=1;i<str.length();i++){
            if(str[i]=='T'||str[i]=='t'){
                int temp=i-1;
                if(isdigit(str[temp])){
                    t=i;
                }
            }
        }
        if(t==-1){
            cout<<"oops"<<endl;
        }
        else{
            start=t-1;
            bool flag=true;
            while(flag==true){
                if(isdigit(str[start])){
                    start--;
                    if(start==-1){
                        flag=false;
                    }
                }
                else if(str[start]=='+'||str[start]=='-'||str[start]=='.'){
                    start--;
                    if(start==0){
                        flag=false;
                    }
                }
                else flag=false;
            }
            start++;
            char arr[200]={0};
            int len=t-start;
            bool dot=false;
            if(str[start]=='+'||str[start]=='-'){
                cout<<str[start];
                for(int i=0;i<len;i++){
                    arr[i]=str[start+i+1];
                    if(arr[i]=='.')dot=true;
                }
                double num=stod(arr);
                if(!dot){
                    cout<<num*5<<'C'<<endl;
                }
                else{
                    num*=5;
                    num*=1.00000000000001;
                    num*=1000;
                    num=round(num);
                    num/=1000;
                    printf("%.2fC\n",num);
                }
                
            }
            else{
                for(int i=0;i<len;i++){
                    arr[i]=str[start+i];
                    if(arr[i]=='.')dot=true;
                }
                double num=stod(arr);
                if(!dot){
                    cout<<num*5<<'C'<<endl;
                }
                else{
                    num*=5;
                    num*=1.00000000000001;
                    num*=1000;
                    num=round(num);
                    num/=1000;
                    printf("%.2lfC\n",num);
                }
            }
        }
    }
}
