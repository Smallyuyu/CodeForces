#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    string s;
    string n = "codeforces";
    cin>>s;
    int cnt = 0;
    for(int i = 0 ; i < 10 ; i++){
        if(n[i] != s[i]) cnt++;
    }
    cout<<cnt<<'\n';
}
int main(){
    //chen;
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}