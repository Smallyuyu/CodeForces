#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
struct lottery{
    int day;
    int num;
};
struct cmp{
    bool operator()(lottery a ,lottery b){
        return a.day < b.day;
    }
};
void sol(){
    int m;
    cin>>m;
    int n,num;
    lottery cur;
    priority_queue<lottery, vector<lottery>, cmp> pq;
    map<int,int> mp;
    stack<int> st;
    for(int i = 0 ; i < m ; i++){
        cin>>n;
        for(int j = 0 ; j < n ; j++){
            cin>>num;
            mp[num] = i + 1;
        }
    }
    for(auto i : mp){
        cur.num = i.first;
        cur.day = i.second;
        pq.push(cur);
    }
    int cnt = m;
    while(st.size() < m){
        cur = pq.top();
        if(cur.day == cnt){
            st.push(cur.num);
            cnt--;
        }
        if(pq.size() == 0){
            cout<<"-1"<<'\n';
            return;
        }
        pq.pop();
    }
    if(cnt == 0){
        for(int i = 0 ; i < m ; i++){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<'\n';
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