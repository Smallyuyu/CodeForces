#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
map<long long int,long long int> dp;
map<long long int,long long int> vis;
map<long long int,long long int> vis2;
long long int anss(long long int n,long long int level){
    if(n < 1) return 0;
    if(level < 1) return 0;
    dp[n]++;
    if(n == 1) return 1;
    if(level == 1) return 1;
    if(vis[n] == 1) return anss(n - level, level - 1);
    if(vis2[n] == 1) return anss(n - level + 1, level - 1);
    return anss(n - level, level - 1) + anss(n - level + 1,level - 1);
}
void sol(){
    long long int n;
    cin>>n;
    int level = 0;
    while(level * (level + 1) < 2 * n){
        level++;
    }
    long long int c = anss(n,level);
    long long int summ = 0;
    for(auto s : dp){
        cout<<s.first<<" ";
        summ = summ + s.first * s.first;
    }
    cout<<"ans:" <<summ<<'\n';
    dp.clear();
}
int main(){
    //chen;
    for(int i = 1 ; i < 500000 ; i++){
        vis2[i * (i + 1) / 2 + 1] = 1;
        vis[i * (i + 1) / 2] = 1;
    }
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    
    system("pause");
    return 0;
}