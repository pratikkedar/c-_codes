#include<bits/stdc++.h>

using namespace std;

string isCorrect(string str){
    stack<char>st;
    for(char ch:str){
        if(ch=='('||ch=='['||ch=='{')
            st.push(ch);
        else{
            if(ch==')'){
                if(st.top()=='(')
                    st.pop();
                else return "NO";
            }
            if(ch==']'){
                if(st.top()=='[')
                    st.pop();
                else return "NO";
            }
            if(ch=='}'){
                if(st.top()=='{')
                    st.pop();
                else return "NO";
            }
        }
    }
    if(st.empty())
        return "YES";
    return "NO";
}

int main(){
    string str;
    cout<<"Enter the parenthesis sequence\n";
    cin>>str;
    cout<<isCorrect(str);
    return 0;
}