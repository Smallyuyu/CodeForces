#include <iostream>
using namespace std;
int main(){
    int t,n;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n;
            int map[n];
            if(n%2==0){
                for(int j=1;j<=n;j++){
                    if(j%2==0){
                        cout<<j-1<<" ";
                    }
                    else{
                        cout<<j+1<<" ";
                    }
                }
                cout<<'\n';
            }
            else if(n==1 || n==3){
                cout<<"-1"<<'\n';
            }
            else if(n==5){
                cout<<"5 4 1 2 3"<<'\n';
            }
            else{
                for(int j=0;j<n;j++){
                    map[j]=n-j;
                }
                //7 6 5 4 3 2 1
                int mid=n/2;
                int tmp=map[mid];
                map[mid]=map[mid-1];
                map[mid-1]=tmp;
                for(int j=0;j<n;j++){
                    cout<<map[j]<<" ";
                }
                cout<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}