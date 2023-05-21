#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int sol2(vector<int> arr,int cnt){
    int k = 0;
    int start = arr[0];
    for(int i = 1 ; i < arr.size() ; i++){
        if(arr[i] == (start + 1)){
            start++;
        }
        else{
            arr[k] = arr[i];
            k++;
        }
    }
    arr.resize(k);
    if(k > 1) return sol2(arr,cnt + 1);
    else if(k == 1) return cnt + 1;
    else return cnt;
}
void sol(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    cout<<sol2(arr,1)<<'\n';
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