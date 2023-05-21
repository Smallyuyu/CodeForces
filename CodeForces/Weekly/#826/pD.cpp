#include <iostream>
using namespace std;
int main(){
    int t,n;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n;
            int tree[n];
            for(int j=0;j<n;j++){
                cin>>tree[j];
            }
            int flag=0;
            int cnt=0;
            int run=1;
            while(run!=n){
                run=run*2;
                for(int j=0;j<n;j=j+run){
                    if(tree[j]>tree[j+run/2]){
                        for(int h=j;h<j+run/2;h++){
                            int tp=h+run/2;
                            int tmp=tree[h];
                            tree[h]=tree[tp];
                            tree[tp]=tmp;
                        }
                        cnt++;
                    }
                }
            }
            for(int j=0;j<n;j++){
                if(tree[j]!=(j+1)){
                    flag++;
                }
            }
            if(flag==0){
                cout<<cnt<<'\n';
            }
            else{
                cout<<"-1"<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}