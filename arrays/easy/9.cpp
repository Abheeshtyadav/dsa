//Union of Two Sorted Arrays

#include<bits/stdc++.h>
using namespace std;

set<int> brute(vector<int> x , vector<int> y){
    set<int> hehe;
    for(int i = 0 ; i < x.size(); i++){
        for(int e=0 ; e < y.size() ; e++){
            
                if(x[i] == y[e]){
                    hehe.emplace(x[i]);
                }
            
        }
    }
    return hehe;


}


int main(){
    vector<int> a = {1,2,3,4,4,5};
    vector<int> b = {2,3,4,5,6};
    set<int> res = brute(a,b);

    for(auto hehe: res){
        cout << hehe << " "; 
    }
}