#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,k;
    cin>>n>>k;
    long long int sum = 0, sum1 = 0;
    vector<long long int> arr(n,0);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.begin() + n);
    for(int i = 0 ; i < k ; i++){
        sum1 = sum1 + arr[n - k + i];
    }
    long long int ans = sum1;
    int left = 0,right = n - k - 1;
    for(int i = 0 ; i < k ; i++){
        sum1 = sum1 + arr[2 * i] + arr[2 * i + 1] - arr[n - k + i];
        if(ans > sum1){
            ans = sum1;
            left = 2 * i + 2;
            right = n - k + i;
        }
    }
    for(int i = left ; i <= right ; i++){
        sum = sum + arr[i];
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
    return 0;
}