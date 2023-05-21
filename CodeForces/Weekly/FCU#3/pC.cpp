#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int main(){
    //chen;
    int n,m;
    cin>>n>>m;
    int tmp;
    priority_queue <int,vector<int>,greater<int>> pq;
    for(int i = 0 ; i < n + m ; i++){
        cin>>tmp;
        pq.push(tmp);
    }
    cout<<pq.top();
    pq.pop();
    for(int i = 0 ; i < n + m - 1; i++){
        cout<<" "<<pq.top();
        pq.pop();
    }
    system("pause");
    return 0;
}