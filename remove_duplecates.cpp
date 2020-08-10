#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string parent;
    cout<<"Enter the parent string \n";
    cin>>parent;
    unordered_map<char,int>m;
    for(char ch:parent){
        m[ch]++;
    }
    unordered_map<char,bool>check;
    for(pair<char,int>p:m){
        check[p.first]=false;
    }
    string result;
    for(char ch:parent){
        if(m[ch]==1){
            result.push_back(ch);
            continue;
        }
        if(check[ch]==false){
            check[ch]=true;
            result.push_back(ch);
        }
        
    }
    cout<<result<<endl;
    return 0;
}
