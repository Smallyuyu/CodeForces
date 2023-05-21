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
    int cnt = 0;;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            cnt++;
        }
        else{
            ans = max(ans,cnt);
            cnt = 0;
        }
    }
    ans = max(ans,cnt);
    cout<<ans<<'\n';
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