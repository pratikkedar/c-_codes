#include<bits/stdc++.h>

using namespace std;

class Patterns{
    private:
        int n;
    public:
        Patterns(int val){
            n=val;
        }
    void star_triangle();
    void star_triangle_without_space();
    void diamond();
    void diamond2();
    void diamond3();
    void diamond4();
};


inline void Patterns::diamond4(){
    int cnt=1;
    int n=this->n;
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            cout<<" ";
        }
        m-=1;
        for(int k=0;k<=i;k++){
            cout<<cnt++<<" ";
        }
        cout<<endl;
    }
    m=0;
    cnt--;
    for(int i=n;i>0;i--){
        for(int j=0;j<m;j++){
            cout<<" ";
        }
        m+=1;
        for(int k=0;k<i;k++){
            cout<<cnt--<<" ";
        }
        cout<<endl;
    }
}

inline void Patterns::diamond3(){
    int cnt=1;
    int n=this->n;
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            cout<<" ";
        }
        m-=1;
        for(int k=0;k<=i;k++){
            cout<<cnt++<<" ";
        }
        cout<<endl;
    }
    m=0;
    for(int i=n;i>0;i--){
        for(int j=0;j<m;j++){
            cout<<" ";
        }
        m+=1;
        for(int k=0;k<i;k++){
            cout<<cnt++<<" ";
        }
        cout<<endl;
    }
}


inline void Patterns::diamond2(){
    int cnt=1;
    int n=this->n;
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            cout<<" ";
        }
        m-=1;
        for(int k=0;k<=i;k++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    m=0;
    for(int i=n;i>0;i--){
        for(int j=0;j<m;j++){
            cout<<" ";
        }
        m+=1;
        for(int k=0;k<i;k++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


inline void Patterns::diamond(){
    int cnt=1;
    int n=this->n;
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            cout<<" ";
        }
        m-=1;
        for(int k=0;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    m=0;
    for(int i=n;i>0;i--){
        for(int j=0;j<m;j++){
            cout<<" ";
        }
        m+=1;
        for(int k=0;k<i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}

inline void Patterns::star_triangle_without_space(){
    int n=this->n;
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

inline void Patterns::star_triangle(){
    int n=this->n;
    int m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            cout<<" ";
        }
        m-=1;
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int val;
    cout<<"Enter the value"<<endl;
    cin>>val;
    Patterns obj(val);
    //obj.star_triangle();
    //obj.star_triangle_without_space();
    obj.diamond4();
    return 0;
}