#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
struct point{
    double x;
    double y;
};
void sol(){
    int n;
    cin>>n;
    vector<double> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int k = -1;
    point p[n];
    while(k <= 30 * n){
        k++;
        auto maxValue = max_element(arr.begin(),arr.end());
        auto minValue = min_element(arr.begin(),arr.end());
        arr[distance(arr.begin(),maxValue)] = ceil(*maxValue / *minValue);
        p[k].x = distance(arr.begin(),minValue);
        p[k].y = distance(arr.begin(),maxValue);
        if(arr[distance(arr.begin(),minValue)] == arr[distance(arr.begin(),maxValue)]){
            cout<<k<<'\n';
            for(int i = 0 ; i <= k ; i++){
                cout<<p[i].x<<" "<<p[i].y;
                cout<<'\n';
            }
            return;
        }
    }
    if(k > 30 * n){
        cout<<"-1"<<'\n';
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
    system("pause");
    return 0;
}