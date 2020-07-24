// incomplete code

#include<bits/stdc++.h>

using namespace std;

class zig_zag_matrix{
    private:
        int n;
    public:
        zig_zag_matrix(int val){
            n=val; 
        }
    void print_matrix();
};
inline void zig_zag_matrix::print_matrix(){
    int n=this->n;
    int cnt=1;
    const int d1=1;
    cint d2=2;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        vector<int>t;
        t.emplace_back(cnt);

        for(int j=0;j<n-1;j++){
            t.emplace_back(cnt+d1);
            d1++;
        }
        arr.emplace_back(t);
        t.clear();
        cnt=cnt+d2;
    }
}
int main(){
    zig_zag_matrix obj(3);
    obj.print_matrix();
    return 0;
}