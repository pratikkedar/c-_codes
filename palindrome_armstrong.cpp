#include<bits/stdc++.h>
#include<cmath>
using namespace std;

bool isPalindrome(string str){
    for(int i=0,j=str.size()-1;i<j;i++,j--){
        if(str[i]!=str[j])
            return false;
    }
    return true;
}

bool isArmstrong(int str){
    int n=(str);
    int sum=0;
    while(n>0){
        int temp=n%10;
        int p=pow(temp,3);
        cout<<temp<<" "<<p<<endl;
        sum+=p;
        n=n/10;
    }
    cout<<"sum "<<sum<<endl;
    if(str==sum)
        return 1;
    return 0;
}

int main(int argc, char const *argv[])
{
    fflush(stdin);
    int s;
    cout<<"Enter the string \n";
    cin>>s;
    /*if(isPalindrome(s))
        cout<<"Yes it is \n";
    else cout<<"No its not\n";
    */
   if(isArmstrong(s)) cout<<"Yes it is \n";
   else cout<<"No it's not\n";
   return 0;
}
