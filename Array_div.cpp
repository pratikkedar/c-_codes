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
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        int tmp;
	        cin>>tmp;
	        v.emplace_back(tmp);
	    }
	    if(n==1){
	        cout<<1<<endl;
	        continue;
	    }
	    int cnt=v[0];
	    vector<int>left,right;
	    for(int i=0;i<n;i++){
	        if(i==0)
	            left.emplace_back(0);
	        else{
	            left.emplace_back(cnt);
	            cnt+=v[i];
	        }
	    }
	   cnt=0;
	   for(int x:v)
	       cnt+=x;
	   for(int i=0;i<n;i++){
	       right.emplace_back(cnt-v[i]);
	       cnt-=v[i];
	   }
       bool flg=true;
       for(int i=0;i<n;i++){
           if(left[i]==right[i]){
                cout<<v[i]<<endl;
                    flg=false;
                    break;
           }
       }
       if(flg)
        cout<<-1<<endl;    
	}
	return 0;
}