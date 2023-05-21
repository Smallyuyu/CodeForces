#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(m);
    for(int i = 0 ; i < m ; i++){
        cin>>arr[i];
    }
    map<int,int> mp;
    vector<int> ans(n,-1);
    int k = 0;
    for(int i = 0 ; i < m ; i++){
        if(mp[arr[i]] == 0){
            ans[k] = i + 1;
            k++;
        }
        mp[arr[i]]++;
        if(k >= n){
            break;
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
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