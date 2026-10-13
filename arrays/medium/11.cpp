#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> brute(vector<int> v){
    set<vector<int>> ans;
    for(int i = 0 ; i < v.size() ; i++ ){
        for(int j = i+1 ; j< v.size() ; j++){
            for(int k=j+1 ; k<v.size() ; k++){
                if(v[i] + v[j] + v[k] == 0){
                    vector<int> t = {v[i] , v[j] , v[k]};
                    sort(t.begin() , t.end());
                    ans.insert(t);
                }
            }
        }
    }

    return vector<vector<int>>(ans.begin() , ans.end());
}

vector<vector<int>> better(vector<int> v){
    set<vector<int>> ans;
    for(int i = 0 ; i < v.size() ; i++){
        for(int j = i + 1 ; j< v.size() ; j++){
            int target = abs(v[i] - v[j]);
            
        }

    }
}


int main(){
    vector<int> v = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = brute(v);
    for(auto hehe: ans){
        for(auto bruh:hehe){
            cout << bruh << " ";
        }
        cout << endl;
    }
}