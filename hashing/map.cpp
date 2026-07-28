//using map it is more efficient
//it stores all in sorted manner
//first we should try unordered_map if it givel tle then we should try map
#include <bits/stdc++.h>
using namespace std;

void number_hashing_usingmap(){
    int arr[10] = {3,3,4,5,4,6,7,6,3,4};
    map<int,int> mpp;
    for(int i = 0;i<10;i++){
        mpp[arr[i]]++;
    }

    cout << mpp[4];
}

void character_hashing_usingmap(){
    string a = "sdgsfgsss";
    map<char,int> mpp;
    for(int i = 0;i<a.length();i++){
        mpp[a[i]]++;
    }
    cout << mpp['s'];

}


int main(){
   /*  number_hashing_usingmap(); */
    character_hashing_usingmap();
}