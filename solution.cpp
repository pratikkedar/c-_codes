#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long int x,y,n;
        cin>>x>>y>>n;
        for(int i=n;i>-1;i--){
            if(i%x==y){
                cout<<i<<endl;
                break;
            }
        }
    }
    
    return 0;
}
