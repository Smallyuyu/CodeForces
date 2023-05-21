#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
struct cover{
    int l;
    int r;
};
void sol(){
    int n,k;
    cin>>n>>k;
    int cl = 0;
    int cr = 0;
    cover arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i].l>>arr[i].r;
        if(arr[i].l == k){
            cl++;
        }
        if(arr[i].r == k){
            cr++;
        }
    }
    if(cl != 0 && cr != 0) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

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