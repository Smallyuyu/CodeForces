#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,m;
    cin>>n>>m;
    int tmp1,tmp2;
    //x + x * y + 1 = n
    map<int,int> mp;
    for(int i = 0 ; i < m ; i++){
        cin>>tmp1>>tmp2;
        mp[tmp1]++;
        mp[tmp2]++;
    }
    int cnt = 0;
    for(auto s : mp){
        if(s.second == 1){
            cnt++;
        }
    }
    int x = n - 1 - cnt;
    int y = cnt / x;
    cout<<x<<" "<<y<<'\n';
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