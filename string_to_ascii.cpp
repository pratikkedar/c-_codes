#include<bits/stdc++.h>

using namespace std;

int main(){
    string s="1234562378";
    string result;
    for(int i=s.size()-1;i>0;i--){
        string t1,t2;
        t1.push_back(s[i]);
        t1.push_back(s[i-1]);
        if(i>1){
            t2.push_back(s[i]);
            t2.push_back(s[i-1]);
            t2.push_back(s[i-2]);
            int v2=stoi(t2);
            
            if(v2<=122 && v2>=97){
                char x=v2;
                result.push_back(x);
            }
        }
        int v1;
        v1=stoi(t1);
        if(v1<=90 && v1>=65){
            char x=v1;
            result.push_back(x);
        }
    }
    cout<<result<<endl;
    return 0;
}