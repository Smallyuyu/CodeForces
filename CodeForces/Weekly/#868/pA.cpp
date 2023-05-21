#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,k;
    cin>>n>>k;
    int all;
    if(n < 2){
        cout<<"NO"<<'\n';
        return;
    }
    else{
        all = n * (n - 1) / 2;
    }
    int A;
    for(int i = 0 ; i < n ; i++){
        A = all - i * (n - i);
        if(A == k){
            cout<<"YES"<<'\n';
            for(int j = 0 ; j < i ; j++){
                cout<<"1 ";
            }
            for(int j = i ; j < n ; j++){
                cout<<"-1 ";
            }
            cout<<'\n';
            return;
        }
    }
    cout<<"NO"<<'\n';
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