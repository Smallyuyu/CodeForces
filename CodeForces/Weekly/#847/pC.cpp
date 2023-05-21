#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n - 1,0));
    vector<int> ans(n);
    map<int,int> mp;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n - 1 ; j++){
            cin>>arr[i][j];
        }
        mp[arr[i][0]]++;
    }
    for(int i = 0 ; i < n ; i++){
        if(mp[arr[i][0]] == 1){
            if(i > 0) cout<<arr[i - 1][0];
            else cout<<arr[i + 1][0];
            for(int j = 0 ; j < n - 1 ; j++){
                cout<<" "<<arr[i][j];
            }
            cout<<'\n';
            return;
        }
    }
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