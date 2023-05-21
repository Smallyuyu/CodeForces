#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>b[i];
    }
    int max1 = max(a[n - 1],b[n - 1]);
    int max2 = min(a[n - 1],b[n - 1]);
    for(int i = 0 ; i < n - 1 ; i++){
        if(a[i] > max2 && b[i] > max2){
            cout<<"No"<<'\n';
            return;
        }
        if(a[i] > max1 || b[i] > max1){
            cout<<"No"<<'\n';
            return;
        }
    }
    cout<<"Yes"<<'\n';
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