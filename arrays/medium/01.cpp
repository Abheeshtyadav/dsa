#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> v , int k){

    for(int i = 0 ; i < v.size() ; i++){
        for(int x = 0 ; x < v.size() ; x++){
            if(v[i] + v[x] == k){
                return {i,x};
            }
        }
    }

    return {-1,-1};

}


vector<int> better(vector<int> v , int k){
    vector<int> re;
    int com=0;
    for(int i = 0 ; i < v.size() ; i++){
        com = max(v[i] , k) - min(v[i] , k);
        

    }
}


int main(){
    vector<int> v = {2,6,5,8,11};
    vector<int> x = brute(v,14);
    for(auto hehe:x){
        cout << hehe << endl;
    }
}