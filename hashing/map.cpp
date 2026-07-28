//using map it is more efficient
//it stores all in sorted manner
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {3,3,4,5,4,6,7,6,3,4};
    map<int,int> mpp;
    for(int i = 0;i<10;i++){
        mpp[arr[i]]++;
    }

    cout << mpp[4];
}