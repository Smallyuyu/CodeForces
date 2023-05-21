#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    set<int> s;
    set<int> ss;
    set<int> sss;
    int tmp;
    int flag = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>tmp;
        if(tmp < 0) flag = 1;
        s.insert(tmp);
        ss.insert(tmp);
    }
    if(flag == 1){
        cout<<"NO"<<'\n';
        return;
    }
    while(!ss.empty()){
        for(const auto &i1 : s){
            for(const auto &i2 : ss){
                if(i1 != i2){
                    if(s.count(abs(i1 - i2)) == 0){
                        sss.insert(abs(i1 - i2));
                    }
                }
                if(s.size() > 300){
                    cout<<"NO"<<'\n';
                    return;
                }
            }
        }
        ss.clear();
        for(const auto &i3 : sss){
            s.insert(i3);
            ss.insert(i3);
        }
        sss.clear();
    }
    if(s.size() > 300){
        cout<<"NO"<<'\n';
        return;
    }
    cout<<"YES"<<'\n';
    cout<<s.size()<<'\n';
    for(const auto &i : s){
        cout<<i<<" ";
    }
    cout<<'\n';
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