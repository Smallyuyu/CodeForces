#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    int o_min = INT_MAX;
    int flag1 = 0;
    int flag2 = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] % 2 == 1){
            if(arr[i] < o_min){
                o_min = arr[i];
                flag2 = 1;
            }
        }
        else{
            flag1 = 1;
        }
    }

    int f1 = 0;
    int f2 = 0;
    if(flag2 == 0 || flag1 == 0){
        cout<<"YES"<<'\n';
        return;
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 == 0){
            if(arr[i] < o_min){
                cout<<"NO"<<'\n';
                return;
            }
        }
    }
    cout<<"YES"<<'\n';
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