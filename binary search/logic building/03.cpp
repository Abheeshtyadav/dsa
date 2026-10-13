//first and last occur
#include<bits/stdc++.h>
using namespace std;



int first(vector<int> v , int k){
    int low = 0 , high = v.size()-1 , f=-1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(v[mid] == k){
            f=mid;
            high = mid-1;

        }
        if(v[mid] > k)
        high = mid-1;
        if(v[mid] < k)
        low = mid+1;


    }
    return f;
}


int las(vector<int> v , int k){
    int low = 0 , high = v.size()-1 , f=-1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(v[mid] == k){
            f=mid;
            low=mid+1;

        }
        if(v[mid] > k)
        high = mid-1;
        if(v[mid] < k)
        low = mid+1;


    }
    return f;
}

int main(){
    vector<int> v = {5,7,7,8,8,10};
    int ans = first(v,8);
    int ans2=las(v,8);
    cout << ans << " " << ans2;

}