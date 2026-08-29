#include<bits/stdc++.h>
using namespace std;



bool brute(vector<int> v){
    
    for(int i=0;i<v.size();i++){
        
        for(int x=i+1;x<v.size();x++){
            if(v[i] > v[x]){
                return false;
            }

        }

    }
    return true;
}

bool opt(vector<int> v){
    for(int i=1;i<v.size();i++){
        if(v[i-1] > v[i]){
            return false;
        }


    }
    return true;
}

int main(){
    vector<int> v = {3,4,5,6,7,7};
    cout << brute(v) << endl;
    cout << opt(v) << endl;
}