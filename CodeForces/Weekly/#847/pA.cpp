#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    string s;
    int cnt = 0;
    cin>>s;
    string pi = "314159265358979323846264338327";
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == pi[i]){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<'\n';
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