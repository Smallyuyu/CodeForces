#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int n,m;
vector<int> arr(200001);
vector<int> p(200001);
vector<int> v(200001);
vector<int> s(m + 1);
void sol(){
    cin>>n>>m;
    int sum = ((m + 1) * m * n) / 2;
    for(int i = 1 ; i <= n ; i++){
        cin>>arr[i];
        s[i] = 0;
    }
    s[0] = 0;
    for(int i = 0 ; i < m ; i++){
        cin>>p[i]>>v[i];
        if(arr[p[i]] != v[i]){
            s[i + 1]++;
        }
    }
    for(int i = 1 ; i <= m ; i++){
        s[i] = s[i] + s[i - 1];
        sum = sum + s[i];
        cout<<s[i]<<" ";
    }
    cout<<sum<<'\n';
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