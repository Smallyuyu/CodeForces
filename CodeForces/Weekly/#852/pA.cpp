#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
struct day{
    int price;
    int kil;
};
int main(){
    //chen;
    long long int t,a,b,n,m;
    cin>>t;
    while(t--){
        long long int pair = 0;
        long long int coin = 0;
        cin>>a>>b;
        cin>>n>>m;
        if(n >= (m + 1)){
            if(a * m > b * (m + 1)){
                pair = n / (m + 1);
                n = n - (pair * (m + 1));
                coin = coin + pair * (m + 1) * b;
            }
            else{
                pair = n / (m + 1);
                n = n - (pair * (m + 1));
                coin = coin + pair * m * a;
            }
        }
        long long int n1 = n;
        long long int n2 = n;
        long long int coin1 = coin;
        long long int coin2 = coin;
        while(n1 > 0){
            n1--;
            coin1 = coin1 + a;
        }
        while(n2 > 0){
            n2--;
            coin2 = coin2 + b;
        }
        if(coin1 > coin2) cout<<coin2<<'\n';
        else cout<<coin1<<'\n';
    }
    system("pause");
    return 0;
}