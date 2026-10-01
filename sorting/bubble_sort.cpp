#include <bits/stdc++.h>
using namespace std;



vector<int> bubble(vector<int> v){
    for(int i = v.size() - 1 ; i >1;i--){
        for(int x = 0 ; x < i ; x++){
            if(v[x] > v[x+1]){
                swap(v[x],v[x+1]);
            }
        }
    }
    return v;
}

int main(){
    vector<int> v = {1,2,4,5,2,4,4,2,2,1,5,7,1,8,1};
    vector<int> ans = bubble(v);
    for(auto hehe:ans){
        cout << hehe << " ";
    }
}