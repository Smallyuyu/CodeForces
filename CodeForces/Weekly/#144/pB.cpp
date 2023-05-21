#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    string a,b;
    cin>>a>>b;
    char c = 'a';
    char f;
        if(a[a.length() - 1] == b[b.length() - 1]){
        cout<<"YES"<<'\n';
        cout<<"*"<<a[a.length() - 1]<<'\n';
        return;
    }
    if(a[0] == b[0]){
        cout<<"YES"<<'\n';
        cout<<a[0]<<"*"<<'\n';
        return;
    }
    for(int i = 0 ; i < 26 ; i++){
        f = 'a';
        for(int j = 0 ; j < 26 ; j++){
            string d = "";
            d = d + c + f;
            string::size_type idx = a.find(d);
            string::size_type idx2 = b.find(d);
            if(idx != string::npos && idx2 != string::npos){
                cout<<"YES"<<'\n';
                cout<<"*"<<d<<"*"<<'\n';
                return;
            }
            f++;
        }
        c++;
    }
    cout<<"NO"<<'\n';
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