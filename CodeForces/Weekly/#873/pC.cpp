#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
long long int m = 1e9 + 7;
int f(long long int n){
    if(n == 1) return 1;
    return n * f(n - 1);
}
void sol(){
    int n;
    cin>>n;
    vector<int> arr1(n,0),arr2(n,0);
    for(int i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>arr2[i];
    }
    int cnt = 0;
    long long int sum = 1;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int left = n - 1;
    int right = n - 1;
    for(int i = 0 ; i < n ; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<'\n';
    for(int i = 0 ; i < n ; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<'\n';
    while(left >= 0 && right >= 0){
        if(arr1[left] > arr2[right]){
            left--;
            cnt++;
        }
        else{
            if(cnt == 0){
                cout<<0<<'\n';
                return;
            }
            right = left;
            sum = (sum * (f(cnt))) % m;
            cnt = 0;
        }
    }
    if(cnt != 0){
        sum = (sum * (f(cnt))) % m;
    }
    cout<<sum<<'\n';
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