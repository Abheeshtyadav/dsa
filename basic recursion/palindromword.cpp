#include <bits/stdc++.h>
using namespace std;


void removes(string &s){
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
}


int main(){
    string s;
    cin >> s;
    removes(s);
    cout << s;
    
}