#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    if(n % 2 == 1){
        for(int i = 1 ; i <= n ; i++){
            cout<<i<<" ";
        }
        cout<<'\n';
        return;
    }
    else{
        int sum = 0;
        sum = (n / 2) * (n + 1);
        sum = sum % n;
        cout<<1 + sum<<" ";
        for(int i = 2 ; i <= n ; i++){
            cout<<i<<" ";
        }
        cout<<'\n';
        return;
    }
    return;
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