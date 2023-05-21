#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<int> ans(arr.rbegin(),arr.rend());
    int x = find(arr.begin(),arr.end(),n) - arr.begin();
    if(x == 0 && n > 1){
        x = find(arr.begin(),arr.end(),n - 1) - arr.begin();
    }
    for(int i = 0 ; i < n ; i++){
        auto p = arr;
        reverse(p.begin() + i,p.end());
        rotate(p.begin(),p.begin() + i,p.end());
        ans = max(ans,p);
    }
    for(int i = 0 ; i < x ; i++){
        auto p = arr;
        reverse(p.begin() + i,p.begin() + x);
        rotate(p.begin(),p.begin() + i,p.end());
        rotate(p.begin(),p.begin() + x - i,p.end() - i);
        ans = max(ans,p);
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