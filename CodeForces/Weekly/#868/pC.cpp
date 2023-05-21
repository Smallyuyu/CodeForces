#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
vector<bool> prime(10000002,true);
void sol(){
    map<int,int> mp;
    int n,k,ans = 0,solo = 0,cnt = 0,twon = 0;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] == 3){
            mp[3]++;
        }
        else{
            k = arr[i];
            for(int j = 2 ; j <= sqrt(arr[i]) + 1 ; j++)
            {
                if(k % j == 0)
                {
                    while(k % j == 0)
                    {   
                        k /= j;
                        mp[j]++;
                    }
                }
                if(prime[k] == 1){
                    mp[k]++;
                    break;
                }
            }
        }
    }
    for(auto i:mp){
        if(prime[i.first] == 1){
            ans = ans + i.second / 2;
            i.second = i.second % 2;
            if(i.second == 1) solo++;
        }
        else if(i.first == 2){
            twon = i.second;
        }
        else{
            cnt++;
        }
    }
    ans = ans + solo / 3;
    solo = solo % 3;
    ans = ans + twon / 2;
    twon = twon % 2;
    if(solo >= 2 && twon >= 1){
        if((solo / 2) > twon){
            ans = ans + twon;
            solo = solo - (twon * 2);
            twon = 0;
        }
        else{
            ans = ans + (solo / 2);
            twon = twon - (solo / 2);
            solo = 0;
        }
    }
    if(solo > cnt && ans == 0){
        cout<<0<<'\n';
        return;
    }
    else{
        cout<<ans + cnt<<'\n';
        return;
    }
}
int main(){
    //chen;
    int t;
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i < 32000 ; i++){
        if (prime[i])
            for (int j = i + i; j <= 9999983 ; j += i)
                prime[j] = false;
    }
    prime[2] = 0;
    cin>>t;
    while(t--){
        sol();
    }
    system("pause");
    return 0;
}