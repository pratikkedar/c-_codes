#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long cnt=0;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        int tmp;
	        cin>>tmp;
	        v.emplace_back(tmp);
	    }
	    for(int i=0;i<n;i++){
	        if(v[i]!=i+1){
	            while(v[i]!=i+1){
	                cnt++;
	                swap(v[i],v[v[i]-1]);
	            }
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}