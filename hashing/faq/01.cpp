//128. Longest Consecutive Sequence
#include<bits/stdc++.h>
using namespace std;

int brute(vector<int> v){
    int count = 1 , current = 0;
    bool found = true;
    for(int i = 0 ; i < v.size() ; i++){
        current = v[i];
        count = 1;
        while(found == true){
            current++;
            for(int x = 0 ; x < v.size() ; x++){
                if(x != y){
                    if(v[x] == current){
                        count++;
                    }
                }
            }
        }
        

    }
}