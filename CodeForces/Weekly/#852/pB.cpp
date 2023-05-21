#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int main(){
    //chen;
    //0 3 0 -2
    // 0 1 0 1 0 1 0 -1 0 -1 
    // 4 -4
    // 0 1 0 1 0 1 0 1 0 -1 0 -1 0 -1 0 -1
    long long int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
            if(x == 0){
                if(y == -1){
                    cout<<2<<'\n';
                    cout<<-1<<" "<<0;
                }
                else{
                    cout<<3<<'\n';
                    cout<<y + 1<<" "<<y<<" "<<y + 1;
                }
            }
            else if(y == 0){
                if(x == 1){
                    cout<<2<<'\n';
                    cout<<1<<" "<<0;
                }
                else{
                    cout<<3<<'\n';
                    cout<<x - 1<<" "<<x<<" "<<x - 1;
                }
            }
            else{
                y = abs(y);
                cout<<(x + y)*2<<'\n';
                for(long long int i = 0 ; i < x ; i++){
                    cout<<"0"<<" "<<"1"<<" ";
                }
                for(long long int i = 0 ; i < y ; i++){
                    if(i == (y - 1)) cout<<"0"<<" "<<"-1";
                    else cout<<"0"<<" "<<"-1"<<" ";
                }
            }
        cout<<'\n';
    }
    return 0;
}