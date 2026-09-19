#include<bits/stdc++.h>
using namespace std;

int maximum1(vector<int> v){
    int count = 0;
    vector<int> c;
    for(auto hehe:v){
        if(hehe == 1){
            count++;
        }
        else{
            c.emplace_back(count);
            count = 0;

        }
    }
    return *max_element(c.begin() , c.end());
}

int optimal(vector<int> v){
    int c = 0,newc=0;
    for(auto hehe:v){
        if(hehe == 1){
            c++;
            newc=max(c,newc);
        }
        else{
            c = 0;
        }
    }
    return newc;

}


int main(){
    vector<int> v = {1,1,1,3,4,5,6,1,1,1,1,1,1,1};
    cout << optimal(v);
}