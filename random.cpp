#include<bits/stdc++.h>
using namespace std;


int bins(vector<int> v , int k){
    int low = 0 , high = v.size() -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(v[mid] == k){
            return mid;
        }
        else if(v[mid] > k){
            high = mid -1;
        }
        else if(v[mid] < k){
            low = mid + 1;
        }
    }
    return -1;
}

void exp(vector<int> v , int k){
    int low=0 , high = v.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        cout << mid;
    }
}


int main(){

    vector<int> v = {1,2,3,4,5,6};
    //exp(v , 2);
    float f= 5/2;
    cout << f;


}