#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int main(){
    //chen;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int map[n];
        long long int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            cin>>map[i];
            if((abs(abs(sum1+map[i])-abs(sum2))) >= abs((abs(sum1) - abs(sum2+map[i])))){
                sum1=sum1+map[i];
            }
            else{
                sum2=sum2+map[i];
            }
        }
        cout<<abs(sum1-sum2)<<'\n';
    }
    system("pause");
    return 0;
}