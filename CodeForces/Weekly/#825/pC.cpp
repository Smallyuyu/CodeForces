#include <iostream>
using namespace std;
int main(){
    int t,n;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n;
            long long int map[n];
            for(int j=0;j<n;j++){
                cin>>map[j];
            }
            int cnt=0;
            int sum=0;
            for(int j=0;j<n-1;j++){
                cnt++;
                if(map[j+1]<cnt+1){
                    sum=sum+(cnt*(cnt+1))/2;
                    j=j-cnt+map[j+1];
                    int h=cnt-map[j+1];
                    sum=sum-h;
                    cnt=0;
                }
            }
            cnt++;
            sum=sum+(cnt*(cnt+1))/2;
            if(map[n-1]<1){
                sum--;
            }
            if(map[0]<1){
                sum--;
            }
            cout<<sum<<'\n';
        }
    }
    system("pause");
    return 0;
}