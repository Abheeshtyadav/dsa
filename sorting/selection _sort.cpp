#include<bits/stdc++.h>
using namespace std;


vector<int> selection_sort(vector<int> v){
    int mini = 0;
    for(int i = 0 ; i < v.size()-1 ; i++){
        mini = v[i];
        for(int x = i ; x < v.size() ; x++){
            if(v[x] < mini)
            mini = v[x];
        }
        swap(v[i],mini);

    }
    return v;
}

int main(){
    vector<int> v = {2,5,1,5,6,7,8,4,7};
    vector<int> ans = selection_sort(v);
    for(auto hehe : ans){
        cout << hehe << " ";
    }
}