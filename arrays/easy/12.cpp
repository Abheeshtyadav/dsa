#include<bits/stdc++.h>
using namespace std;



int brute(vector<int> v){
   
    for(int i = 0 ; i < v.size() ; i++){
        int count = 0;
        for(int x = 0 ; x <v.size() ; x++){
            if(v[x] == v[i]){
                count++;
            }


        }
        if(count == 1){
            return v[i];
        }
    }
}

int better(const vector<int>& v) {
    unordered_map<int, int> m;

    for (int num : v) {
        m[num]++;
    }


    for(auto const hehe:m){
        int keyy=hehe.first;
       int  valuee=hehe.second;
       if(valuee == 1){
        return keyy;
       }
    }

    return -1; 
}


int optimal(vector<int> v){
    int zorr = 0;
    for(auto a:v){
        zorr = zorr ^ a;
    }
    return zorr;
}


int main(){
    vector<int> v = {1,1,2,2,3,3,4};
    cout << better(v) << endl;
    cout << brute(v) << endl;
    cout << optimal(v);
}