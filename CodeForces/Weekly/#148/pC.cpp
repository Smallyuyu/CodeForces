#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    int flag;
    if(arr[0] > arr[1]) flag = 2;
    else flag = 1;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int k = 1;
    vector<int> arr2;
    arr2.push_back(arr[0]);
    for(int i = 0 ; i < n - 1 ; i++){
        if(arr[i] != arr[i + 1]){
            arr2.push_back(arr[i + 1]);
            k++;
        }
    }
    if(k == 1){
        cout<<1<<'\n';
        return;
    }
    else if(k == 2){
        cout<<2<<'\n';
        return;
    }
    else{
        int flag;
        if(arr2[0] > arr2[1]) flag = 1;
        else flag = 2;
        int cnt = 2;
        for(int i = 0 ; i < k - 1 ; i++){
            if(arr2[i] > arr2[i + 1]){
                if(flag == 2){
                    cnt++;
                }
                flag = 1;
            }
            else if(arr2[i] < arr2[i + 1]){
                if(flag == 1){
                    cnt++;
                }
                flag = 2;
            }
        }
        cout<<cnt<<'\n';
        return;
    }
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