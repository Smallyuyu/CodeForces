#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int main(){
    //chen;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int arr[n],vis[n],p1 = 0 , p2 = 0;
        int k = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
            vis[i] = 0;
            if(i==0 && arr[i] == 2){
                p1++;
                p2--;
            }
            if(arr[i] == 2){
                p2++;
            }
        }
        while(p1 != p2 && vis[k] == 0){
            vis[k] = 1;
            if(p1 > p2){
                k--;
                if(arr[k] == 2){
                    p1--;
                    p2++;
                }
            }
            else{
                k++;
                if(arr[k] == 2){
                    p1++;
                    p2--;
                }
            }
        }
        if(p1 != p2) cout<<"-1"<<'\n';
        else cout<<k + 1<<'\n';
    }
    system("pause");
    return 0;
}