#include <iostream>
using namespace std;
int main(){
    int t;
    while(cin>>t){
        int n,x,y;
        for(int i=0;i<t;i++){
            int flag=0;
            cin>>n;
            int map[n+1];
            int a[n+1];
            for(int j=0;j<n;j++){
                cin>>map[j];
            }
            a[0]=map[0];
            for(int j=1;j<n;j++){
                x=map[j]+a[j-1];
                y=a[j-1]-map[j];
                if(y>=0 && x!=y){
                    flag++;
                }
                else{
                    a[j]=x;
                }
            }
            if(flag==0){
                for(int j=0;j<n;j++){
                    cout<<a[j]<<" ";
                }
            }
            else{
                cout<<"-1";
            }
            cout<<'\n';
        }
    }
    system("pause");
    return 0;
}