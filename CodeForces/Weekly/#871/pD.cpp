#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int find_sol(int n,int m){
    if(n == m) return 1;
    if(m > n) return 0;
    if(m % 2 != 0){
        return find_sol(n , m * 3);
    }
    return find_sol(n, m * 3) + find_sol(n , (m / 2) * 3);
}
void sol(){
    int n,m;
    cin>>n>>m;
    if(find_sol(n,m) == 0){
        cout<<"NO"<<'\n';
        return;
    }
    cout<<"YES"<<'\n';
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