#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = n - 1;
    for(int i = 0 ; i < s.length() - 2 ; i++){
        if(s[i] == s[i+2]) ans--;
    }
    cout<<ans<<'\n';
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