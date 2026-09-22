//2149. Rearrange Array Elements by Sign

#include<bits/stdc++.h>
using namespace std;


vector<int> brute(vector<int> v){
    vector<int> neg;
    vector<int> pos;
    vector<int> neww;
    for(auto hehe:v){
        if(hehe>=0){
            pos.emplace_back(hehe);
        }
        else{
            neg.emplace_back(hehe);
        }
    }
    for(int i = 0 ; i < max(neg.size() , pos.size()) ; i++){
        if(i < pos.size()){
        neww.emplace_back(pos[i]);
        }
        if(i < neg.size()){
        neww.emplace_back(neg[i]);
    }
    }
    return neww;
}

vector<int> optimal(vector<int> v){
    int neg = v[0];
    
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i]<0){
        neg = v[i];
        break;
        }

    }

    for(int i = 0 ; i < v.size() ; i++){
        
    }
}


int main(){
    vector<int> v={3,1,-2,-5,2,-4};
    vector<int> res = brute(v);
    for(auto hehe : res){
        cout << hehe << " ";
    }
}