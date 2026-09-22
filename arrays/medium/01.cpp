#include<bits/stdc++.h>
using namespace std;


//majority element 1 (83)

int brute(vector<int> v){
    int moj = v.size()/2;
    for(int i = 0 ; i < v.size() ; i++){
        int count = 0;
        for(int x = 0 ; x < v.size() ; x++){
            if(i != x){
                if(v[i] == v[x]){
                    count++;
                }
            }
        }
        if(count >= moj){
            return v[i];
        }
    }
    return -1;
}

int better(vector<int> v){
    map<int,int> m;

    for(auto hehe:v){
        m[hehe]++;
        if(hehe > v.size()/2){
            return m[hehe];
        }
    }
    return -1;
}


//Moore's voting algo
int optimal(vector<int> v){

    int ele = v[0];
    int count = 1;
    for(int i =1 ; i < v.size() ; i++){

        if(ele == v[i]){
            count++;
        }
        else if(ele != v[i]){
            count--;
        }
        if(count <= 0){
            ele = v[i];
            count = 0;
        }
    }

    return ele;

}


int main(){
    vector<int> v= {2,2,1,1,1,2,2};
    cout << optimal(v);
}