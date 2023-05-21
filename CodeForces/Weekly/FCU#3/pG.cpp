#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int n,m,k;
int sol(vector<vector<long long int>>& arr,int x,int y,long long int num){
    if(x == n - 1 && y == m - 1){
        if(num ^ arr[x][y] == k) return 1;
    }
    if(x >= n || y >= m) return 0;
    return sol(arr,x + 1,y,num ^ arr[x][y]) + sol(arr,x,y + 1,num ^ arr[x][y]);
}
int main(){
    //chen;
    cin>>n>>m>>k;
    vector<vector<long long int>> arr(n,vector<long long int>(m,0));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<sol(arr,0,0,0)/2;
    system("pause");
    return 0;
}