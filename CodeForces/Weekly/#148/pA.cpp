#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    string s;
    cin>>s;
    map<char,int> mp;
    int cnt = 0;
    for(int i = 0 ; i < s.length() ; i++){
        mp[s[i]]++;
        if(mp[s[i]] == 1){
            cnt++;
        }
    }
    if(cnt == 1){
        cout<<"NO"<<'\n';
        return;
    }
    else if(cnt == 2){
        for(auto s : mp){
            if(s.second == 1){
                cout<<"NO"<<'\n';
                return;
            }
        }
    }
    cout<<"YES"<<'\n';
    return;
}
int main(){
    //chen;
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    system("pause");
    return 0;
}