#include<bits/stdc++.h>
using namespace std;

vector<int> towardsright(vector<int> v , int k){

    vector<int> temp;
    vector<int> temp1 = v;

    for(int i = (v.size() - k) ; i<v.size() ; i++){
        temp.emplace_back(v[i]);
    }
    

    for(int i = k ; i < v.size() ; i++){
        
        v[i] = temp1[i-k];
        

    }

    for(int i = 0 ; i < k ; i++){
        v[i] = temp[i];
    }

    return v;



}

int main(){
    vector<int> v = {1,2,3,4,5,6};
    vector<int> hehe = towardsright(v,2);
    for(auto a:hehe){
        cout << a << " ";
    }


}