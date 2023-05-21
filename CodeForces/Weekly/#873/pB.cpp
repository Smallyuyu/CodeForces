#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int gcd(int x,int y){
    if(x == 1 || y == 1) return 1;
    while((x%=y)&&(y%=x));
    return x + y;
}
void sol(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    map<int,int> mp;
    int flag1 = 0;
    int flag2 = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        mp[abs(arr[i] - i - 1)]++;
        if(abs(arr[i] - i - 1) == 2) flag1 = 1;
        if(abs(arr[i] - i - 1) == 3) flag2 = 2;
    }
    if(flag1 == 1 &&  flag2 == 1){
        cout<<1<<'\n';
        return;
    }
    vector<int> po;
    for(auto s : mp){
        po.push_back(s.first);
    }
    int ans = INT_MAX;
    if(po.size() == 1){
        cout<<po[0]<<'\n';
        return;
    }
    for(int i = 0 ; i < po.size() - 1; i++){
        for(int j = 1 ; j < po.size() ; j++){
            ans = min(ans,gcd(po[i],po[j]));
            if(ans == 1){
                cout<<1<<'\n';
                return;
            }
        }
    }
    cout<<ans<<'\n';
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