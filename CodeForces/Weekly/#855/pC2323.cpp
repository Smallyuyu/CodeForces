#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    vector<long long int> arr(n);
    vector<long long int> ma(n);
    int maxx = 0;
    int p = 0;
    long long int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] == 0){
            for(int j = 0 ; j < i ; j++){
                if(maxx < arr[j]){
                    maxx = arr[j];
                    p = j;
                }
            }
            sum = sum + maxx;
            arr[p] = 0;
            maxx = 0;
        }
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
    system("pause");
    return 0;
}