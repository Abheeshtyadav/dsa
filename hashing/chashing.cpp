#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[26] = {0};
    string s="sfgdfgdfaa";
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }

    cout << arr[0];
}