//search in rotated array
#include<bits/stdc++.h>
using namespace std;


int ss(vector<int> nums  , int target){
    int low = 0 , high = nums.size() - 1;
    while (low < high)
    {
        int mid = low + (high-low)/2;
       if(nums[mid] == target)
       return mid;
       if(nums[mid] > nums[low] && nums[mid] < nums[mid])
    }
    
    return -1;

}

int main(){
    vector<int> v = {4,5,6,7,0,1,2};
    cout << ss(v,0);
}