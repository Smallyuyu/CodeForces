#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int gcd(int x,int y){
    while( (x %= y) && (y %= x));
    return x+y;
}
void sol(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(gcd(arr[i],arr[j]) <= 2){
                cout<<"YES"<<'\n';
                return;
            }
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
    system("pause");
    return 0;
}