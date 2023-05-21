#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,k;
    cin>>n>>k;
    vector<int> arr1(n,0);
    vector<int> arr2(n,0);
    for(int i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>arr2[i];
    }
    vector<int> cp1 = arr1,cp2 = arr2;
    sort(cp1.begin(),cp1.end());
    sort(cp2.begin(),cp2.end());
    map<int,vector<int>> mp;
    for(int i = 0 ; i < n ; i++){
        mp[cp1[i]].push_back(cp2[i]);
    }
    vector<int> ans;
    int cur;
    for(int i = 0 ; i < n ; i++){
        ans.push_back(mp[arr1[i]].back());
        mp[arr1[i]].pop_back();
    }
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';
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