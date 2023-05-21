#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n,k;
    cin>>n>>k;
    string s;
    map <char,int> mp;
    cin>>s;
    for(int i = 0 ; i < s.length() ; i++){
        mp[s[i]]++;
    }
    char cur1,cur2;
    int c1,c2;
    int d;
    int sum = 0;
    for(int i = 0 ; i < 26 ; i++){
        cur1 = 'A' + i;
        cur2 = 'a' + i;
        c1 = mp[cur1];
        c2 = mp[cur2];
        if(c2 > c1){
            swap(c1,c2);
        }
        sum = sum + c2;
        c1 = c1 - c2;
        c2 = 0;
        while(c1 >= 2 && k > 0){
            c1 = c1 - 2;
            k--;
            sum = sum + 1;
        }
    }
    cout<<sum<<'\n';
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