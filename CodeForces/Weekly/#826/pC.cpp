#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,n;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n;
            int map[n];
            for(int j=0;j<n;j++){
                cin>>map[j];
            }
            int x=0,y=n-1;
            int left=map[x];
            int right=map[y];
            int flag=0;
            while(x<y && flag==0){
                if(left<right){
                    x++;
                    left=left+map[x];
                }
                else if(left>right){
                    y--;
                    right=right+map[y];
                }
                else{
                    flag=1;
                }
            }
            if(flag==0){
                cout<<n<<'\n';
                continue;
            }
            int cnt=left;
            int max;
            if(x+1>(n-y)){
                max=x+1;
            }
            else{
                max=n-y;
            }
            int tmp=0;
            int tt=0;
            for(int j=x+1;j<y;j++){
                tmp=tmp+map[j];
                tt++;
                if(tmp==cnt){
                    if(tt>max){
                        max=tt;
                    }
                    tmp=0;
                    tt=0;
                }
            }
            //double 
            left=map[x];
            right=map[y];
            flag=0;
            while(x<y && flag==0){
                if(left<right){
                    x++;
                    left=left+map[x];
                }
                else if(left>right){
                    y--;
                    right=right+map[y];
                }
                else{
                    flag=1;
                }
            }
            cnt=left;
            int maxx;
            if(x+1>(n-y)){
                maxx=x+1;
            }
            else{
                maxx=n-y;
            }
            tmp=0;
            tt=0;
            for(int j=x+1;j<y;j++){
                tmp=tmp+map[j];
                tt++;
                if(tmp==cnt){
                    if(tt>maxx){
                        maxx=tt;
                    }
                    tmp=0;
                    tt=0;
                }
            }
            //if mirror
            int f=0;
            for(int j=0;j<n;j++){
                if(map[j]==map[n-j-1]){
                    f++;
                }
            }
            if(f==n && n%2==0){
                if(n/2 > max){
                    cout<<max<<'\n';
                    continue;
                }
                else{
                    cout<<n/2<<'\n';
                    continue;
                }
            }
            if(tmp>0){
                cout<<n<<'\n';
                continue;
            }
            if(max>maxx){
                cout<<maxx<<'\n';
            }
            else{
                cout<<max<<'\n';
            }
        }
    }
    return 0;
}