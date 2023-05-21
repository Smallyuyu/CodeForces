#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    string s;
    int n;
    cin>>n;
    map<string,int> mp;
    vector<char> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n - 1 ; i++){
        s = "";
        s = s +  arr[i] + arr[i + 1];
        mp[s]++;
    }
    cout<<mp.size()<<'\n';
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