#include <iostream>
using namespace std;
#include <stack>
# include <math.h>

int postfix(string s){
    stack<int>s;

    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0')
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch(s[i]){
                case'+':
                st.push(op1+op2);
                break;
                case'-':
                st.push(op1-op2);
                break;
                case'*':
                st.push(op1*op2);
                break;
                case'/':
                st.push(op1/op2);
                break;
                case'^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
        return st.top();
}

int main(){
cout<<postfix(")
}