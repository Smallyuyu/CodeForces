#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,s,r;
    cin>>n>>s>>r;
    vector<int> arr(n);
    int max = s - r;
    arr[0] = max;
    int remain = n - 1;
    r = r - remain;
    for(int i = 1 ; i <= remain ; i++){
        arr[i] = 1;
        if(r >= max){
            arr[i] = arr[i] + max - 1;
            r = r - max + 1;
        }
        else{
            arr[i] = arr[i] + r;
            r = 0;
        }
    }
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
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