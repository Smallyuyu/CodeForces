#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int main(){
    //chen;
    int a,b;
    string c;
    while(cin>>a>>b>>c){
        int tmp = 0;
        int cnt1 = 1;
        for(int i = 0 ; i < c.length() ; i++){
            tmp = tmp + cnt1 * (c[c.length() - i - 1] - '0');
            cnt1 = cnt1 * a;
        }
        string ans;
        while(tmp > 0){
            if(tmp % b != 0){
                char t = tmp % b;
                t = t + '0';
                ans = ans + t;
            }
            else{
                ans = ans + '0';
            }
            tmp = tmp / b;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }
    system("pause");
    return 0;
}