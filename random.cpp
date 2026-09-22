#include<bits/stdc++.h>
using namespace std;



set<int> removedep(vector<int> v){
    set<int> s;
    for(auto hehe:v){
        s.emplace(hehe);
    }
    for(int i = 0 ; i < s.size() ; i++){
        v[i] = s[i];
    }
    return s;

}

int main(){
    vector<int> v = {1,1,2,2,3,4,5,6};
    set<int> s = removedep(v);
    for(auto hehe: s){
        cout << hehe << " ";
    }
}