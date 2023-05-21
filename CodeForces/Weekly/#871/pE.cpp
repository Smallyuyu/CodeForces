#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int DFS(vector<vector<int>>& arr ,vector<vector<int>>& vis,int x ,int y ,int n ,int m){
    if(!(x >= 0 && y >= 0 && x < n && y < m)) return 0;
    if(arr[x][y] == 0) return 0;
    if(vis[x][y] == 1) return 0;
    vis[x][y] = 1;
    int cnt = arr[x][y];
    cnt = cnt + DFS(arr ,vis ,x - 1 ,y ,n ,m) + DFS(arr ,vis ,x + 1 ,y ,n ,m) + DFS(arr ,vis ,x ,y - 1 ,n ,m) + DFS(arr ,vis ,x ,y + 1 ,n ,m);
    return cnt;
}
void sol(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    vector<vector<int>> vis(n,vector<int>(m,0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }
    int ans = 0;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j] != 0 && vis[i][j] != 1){
                cnt = DFS(arr,vis,i,j,n,m);
                if(cnt > ans) ans = cnt;
            }
        }
    }
    cout<<ans<<'\n';

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