#include <bits/stdc++.h>
using namespace std;

//vector
int vec(){
    vector<int> v;
    v.emplace_back(2);
    v.insert(v.end(),{4,6,3,6,7});
    v.insert(v.begin()+1,{69});
    sort(v.begin(),v.end());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it << endl;
    }
}

//map
void mapi(){
    map<int,int> mpp;
    mpp.emplace(3,5);

    auto e = mpp.find(3);
    cout << (*e).first << "   " << (*e).second;

}
//list
void lis(){
    /* list<int> li; */
    list<int> li(5,100);
    li.emplace_front(2);
    
    for(list<int>::iterator it=li.begin();it != li.end();it++){
        cout << *it << endl;
    }

}


int main(){
    vec();
}


