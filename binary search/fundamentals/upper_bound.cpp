#include<bits/stdc++.h>
using namespace std;


int upperb(vector<int> v , int k){
    int low = 0 , high = v.size() - 1 , ans = v.size();
    while(low < high){
        int mid = low + (high - low) / 2;
        if(v[mid] <= k){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }

        

    }
    return ans;
}



int main(){
    vector<int> v = {1,3,2,4,5,6,6,6,7,8};
    sort(v.begin() , v.end());

    for(auto hehe : v){
        cout << hehe << " ";
    }
}