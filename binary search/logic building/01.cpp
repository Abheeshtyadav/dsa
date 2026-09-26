#include<bits/stdc++.h>
using namespace std;


int brute(vector<int> v , int k){
    int low = 0 , n = v.size() , high = n -1 , mid = (low+high)/2;
    while(low < high){
        if(v[mid] == k){
            return mid;
        }
        if(v[mid] > k){
            high = mid-1;
        }
        if(v[mid] < k){
            low = mid+1;
        }
    }
    return mid; 
}


int main(){
    vector<int> v = {1,3,5,6};
    cout << brute(v,7);
}