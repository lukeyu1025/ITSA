#include <iostream>
#include <stack>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        stack<char> op;
        string str;//48~57
        getline(cin,str);
        int len=str.length();
        for(int j=0;j<len;j+=2){
            if((int)str[j]>=48&&(int)str[j]<=57)cout<<str[j];
            else if(str[j]=='*'||str[j]=='/'||str[j]=='(')op.push(str[j]);
            else if(str[j]=='+'||str[j]=='-'){
                if(op.empty())op.push(str[j]);
                else{
                        if(op.top()=='*'||op.top()=='/'){
                            char temp=op.top();
                            op.pop();
                            cout<<temp;
                        }
                    op.push(str[j]);
                }
                }
            else if(str[j]==')'){
                while(op.top()!='('){
                    char temp=op.top();
                    cout<<temp;
                    op.pop();
                }
                op.pop();
            }
        }
        while(!op.empty()){
            char temp=op.top();
            op.pop();
            cout<<temp;
        }
        cout<<endl;
    }
}
