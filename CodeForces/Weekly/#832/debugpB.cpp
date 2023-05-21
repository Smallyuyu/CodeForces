#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int main(){
    //chen;
    int t,n;
    cin>>t;
    while(t--){
        for(int n=1;n<=100;n++){
            string l="BANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBANBAN";
            int flag=0;
            if(n%2==0){
                cout<<n<<'\n';
                for(int i=1;i<n;i=i+2){
                    int tmp=l[2+(3*(i-1))-1];
                    l[2+(3*(i-1))-1]=l[3+(3*i)-1];
                    l[3+(3*i)-1]=tmp;
                }
                for(int i=0;i<n*3;i++){
                    cout<<l[i];
                }
                cout<<'\n';
            }
            else{
                cout<<n<<'\n';
                for(int i=1;i<n;i=i+2){
                    int tmp=l[2+(3*(i-1))-1];
                    l[2+(3*(i-1))-1]=l[3+(3*i)-1];
                    l[3+(3*i)-1]=tmp;
                }
                int tmp=l[0];
                l[0]=l[3+(3*(n-1))-1];
                l[3+(3*(n-1))-1]=tmp;
                for(int i=0;i<n*3;i++){
                    cout<<l[i];
                }
                cout<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}