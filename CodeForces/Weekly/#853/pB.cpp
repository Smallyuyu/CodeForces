#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int flag = 0;
    int flag2 = 0;
    for(int i = 0 ; i < n / 2 ; i++){
        if(s[i] != s[n - i - 1]){
            flag = 1;
        }
        if(s[i] == s[n - i - 1] && flag == 1){
            flag2 = 1;
        }
        if(s[i] != s[n - i - 1] && flag2 == 1){
            cout<<"No"<<'\n';
            return;
        }
    }
    cout<<"Yes"<<'\n';
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