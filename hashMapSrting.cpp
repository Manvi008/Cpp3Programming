#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i;
    map<char , int> mpp;
      for (char c : s) {
        mpp[c]++;
    }
    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0 ;
}
