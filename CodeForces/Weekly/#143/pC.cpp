#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,cur;
    cin>>n;
    vector<int> ta(n);
    vector<int> milk(n);
    vector<long long int> sum(n);
    for(int i = 0 ; i < n ; i++){
        cin>>milk[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>ta[i];
        sum[i] = min(milk[i],ta[i]);
        milk[i] = milk[i] - min(milk[i],ta[i]);

    }
    for(int i = 0 ; i < n - 1 ; i++){
        cur = i;
        while(milk[i] > 0 && cur < n - 1){
            sum[cur + 1] = sum[cur + 1] + min(milk[i],ta[cur + 1]);
            milk[i] = milk[i] - min(milk[i],ta[cur + 1]);
            cur++;
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout<<sum[i]<<" ";
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