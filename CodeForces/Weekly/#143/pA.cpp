#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,m;
    string s1,s2;
    cin>>n>>m;
    cin>>s1>>s2;
    char cur = s1[0];
    int cnt = 0;
    for(int i = 1 ; i < s1.length() ; i++){
        if(cur == s1[i]){
            cnt++;
        }
        cur = s1[i];
    }
    for(int i = 0 ; i < s2.length() ; i++){
        if(cur == s2[s2.length() - i - 1]){
            cnt++;
        }
        cur = s2[s2.length() - i - 1];
    }
    if(cnt > 1) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
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