#include <iostream>
using namespace std;
int main(){
    int t,n;
    int map1[111],map2[111];
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n;
            int cnt=0,cnt1=0,cnt2=0;
            for(int j=0;j<n;j++){
                cin>>map2[j];
            }
            for(int j=0;j<n;j++){
                cin>>map1[j];
            }
            for(int j=0;j<n;j++){
                if(map1[j]!=map2[j]){
                    cnt++;
                }
                if(map1[j]==1){
                    cnt1++;
                }
                if(map2[j]==1){
                    cnt2++;
                }
            }
            int dif;
            if(cnt1>=cnt2){
                dif=cnt1-cnt2;
            }
            else{
                dif=cnt2-cnt1;
            }
            if(cnt1==cnt2 && cnt==0){
                cout<<"0"<<'\n';
            }
            else if(cnt1==cnt2 && cnt!=0){
                cout<<"1"<<'\n';
            }
            else if(cnt>=(dif+1)){
                cout<<dif+1<<'\n';
            }
            else{
                cout<<cnt<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}