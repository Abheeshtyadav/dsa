#include<bits/stdc++.h>
using namespace std;


int bas(vector<int> v , int target){
        int low = 0 , high = v.size() -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(v[mid] == target){
            return mid;
            break;
        }
        if(v[mid] > target){
            high = mid-1;
        }
        if(v[mid] < target){
            low = mid+1;
        }
    }
    return -1;
}

int rec(vector<int> v , int target){
    int high = 0 , low = 0 , mid = (low + high)/2;
    if(v[mid] == target)
    return mid;

    
}


int main(){
    vector<int> v = {-1,0,3,5,9,12};
    int target = 9;
    cout << bas(v,target);
    
}

