#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> move(n);
    vector<int> a(n);
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        move[i] = abs(arr[i] - (i + 1));
        if(move[i] % k != 0){
            a[cnt] = i;
            cnt++;
        }
    }
    if(k == 1){
        cout<<0<<'\n';
        return;
    }
    if(cnt == 0){
        cout<<0<<'\n';
        return;
    }
    if(cnt > 2){
        cout<<-1<<'\n';
        return;
    }
    if(cnt == 2){
        if(abs(arr[a[0]] - (a[1] + 1)) % k == 0){
            if(abs(arr[a[1]] - (a[0] + 1)) % k == 0){
                cout<<1<<'\n';
                return;
            }
        }
        cout<<-1<<'\n';
        return;
    }
    if(cnt == 1){
        for(int i = a[0] % k ; i < n ; i = i + k){
            if(abs(arr[i] - (a[0] + 1)) % k == 0){
                if(abs(arr[a[0]] - (arr[i] + 1)) % k == 0){
                    cout<<1<<'\n';
                    return;
                }
            }
        }
    }
    cout<<-1<<'\n';

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