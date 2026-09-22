//Leaders in an Array

#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> v){
    vector<int> leader;
    for(int i = 0 ; i < v.size() ; i++){
        bool big = false;
        for(int x = i+1 ; x<v.size() ; x++){
            if(v[x] > v[i]){
                big = true;
            }

        }
        if(big == false){
            leader.emplace_back(v[i]);
        }
    }
    return leader;
}


vector<int> optimal(vector<int> v){
    vector<int> leader;
    int maxi = 0;
    for(int i = v.size() -1 ; i>=0 ; i--){
        if(v[i] > maxi){
            maxi = v[i];
            leader.emplace_back(maxi);
        }
        
    }
    reverse(leader.begin() , leader.end());
    return leader;
}


int main(){
    vector<int> v = {16, 17, 4, 3, 5, 2};
    vector<int> res = optimal(v);

    for(auto hehe:res){
        cout << hehe << " ";
    }
}