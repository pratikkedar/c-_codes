#include<bits/stdc++.h>

using namespace std;

int main(){
    string parent;
    cin>>parent;
    //bool flag=false;
    int pos=parent.size()-1;
    for(int i=0;i<parent.size()-1;i++){
        for(int j=i+1;j<parent.size()-1;j++){
            if(parent[i]==parent[j]){
                continue;    
            }
            pos=i;
            goto here;
        }
    }
    here:
    cout<<parent[pos];
    return 0;
}