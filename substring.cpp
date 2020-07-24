#include<bits/stdc++.h>

using namespace std;

int main(){
    string parent="bb";
    string child="b";
    int cnt=0;
    int temp=0;
    register short j=0;
    for(int i=0;i<parent.size();i++){
        if(temp==child.size()){
            cnt++;
            temp=0;
            j=0;
        }
        
        if(parent[i]==child[j]){
            j++;
            temp++;
            // as we are at the last letter and in next interation we are increamenting the count so we need to handle that situation
            if(i==parent.size()-1){
                if(temp==child.size())
                    cnt++;
            }
        }
    }
    cout<<"Number of substrings are "<<cnt<<endl;
    return 0;
}