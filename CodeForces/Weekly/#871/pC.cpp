#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    int m;
    string s;
    int flag1 = 0,flag2 = 0,flag3 = 0;
    int ans1 = 9999999,ans2 = 9999999,ans3 = 9999999;
    for(int i = 0 ; i < n ; i++){
        cin>>m>>s;
        if(s == "11"){
            ans3 = min(m,ans3);
            flag3 = 1;
        }
        else if(s == "10"){
            ans1 = min(m,ans1);
            flag1 = 1;
        }
        else if(s == "01"){
            ans2 = min(m,ans2);
            flag2 = 1;
        }
    }
    if(flag3 == 0 && !(flag1 == 1 && flag2 == 1)){
        cout<<-1<<'\n';
        return;
    }
    if(ans1 + ans2 > ans3){
        cout<<ans3<<'\n';
        return;
    }
    cout<<ans1+ans2<<'\n';
}
int main(){
    //chen;
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    return 0;
}