#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,n,c;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n>>c;
            int map[n];
            int count[n];
            for(int j=0;j<n;j++){
                count[j]=0;
            }
            for(int j=0;j<n;j++){
                cin>>map[j];
            }
            sort(map,map+n);
            int cnt=0,sum=0;
            for(int j=1;j<n;j++){
                if(map[j]!=map[j-1]){
                    count[cnt]++;
                    cnt++;
                }
                else{
                    count[cnt]++;
                }
            }
            count[cnt]++;
            for(int j=0;j<cnt+1;j++){
                if(count[j]<c){
                    sum=sum+count[j];
                }
                else{
                    sum=sum+c;
                }
            }
            cout<<sum<<'\n';
        }
    }
    system("pause");
    return 0;
}