#include<bits/stdc++.h>
#include<cmath>
using namespace std;
vector<string>v;

void permutation(string s,int left,int right){
    if(left==right)
        v.emplace_back(s);
    else{
        for(int i=left;i<=right;i++){
            // swap left with current 
            swap(s[left],s[i]);

            // call for next recursive value
            permutation(s,left+1,right);

            //swap left with current
            swap(s[left],s[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    string str;
    cout<<"Enter the string\n";
    cin>>str;
    permutation(str,0,str.size()-1);
    sort(v.begin(),v.end());
    for(string s:v)
        cout<<s<<endl;
    return 0;
}
