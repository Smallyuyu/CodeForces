#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int main(){
    //chen;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1){
            cout<<1<<'\n'<<1<<" "<<2<<'\n';
            continue;
        }
        if(n%2==0){
            cout<<n/2<<'\n';
            for(int i=1;i<n;i=i+2){
                cout<<2+(3*(i-1))<<" ";
                cout<<3+(3*i);
                cout<<'\n';
            }
        }
        else{
            cout<<(n/2)+1<<'\n';
            for(int i=1;i<n;i=i+2){
                cout<<2+(3*(i-1))<<" ";
                cout<<3+(3*i);
                cout<<'\n';
            }
            cout<<1+(3*(n-1))<<" ";
            cout<<2+(3*(n-1))<<'\n';
        }
    }
    system("pause");
    return 0;
}