#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,n;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n;
            int flag=0;
            long long map[n+1];
            for(int j=0;j<n;j++){
                cin>>map[j];
            }
            sort(map,map+n);
            for(int j=1;j<n;j++){
                if(map[j-1]==map[j]){
                    cout<<"NO"<<'\n';
                    flag++;
                    break;
                }
            }
            if(flag==0){
                cout<<"YES"<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}