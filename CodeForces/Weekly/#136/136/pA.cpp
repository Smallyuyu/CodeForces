#include <iostream>
using namespace std;
int main(){
    int t,n,m;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n>>m;
            if(n==3 && m==3){
                cout<<"2 2"<<'\n';
            }
            else if(n>=3 && m>=3){
                cout<<n<<" "<<m<<'\n';
            }
            else if(n==1 || m==1){
                cout<<n<<" "<<m<<'\n';
            }
            else if(n==3 && m==2){
                cout<<"2 1"<<'\n';
            }
            else if(n==2 && m==3){
                cout<<"1 2"<<'\n';
            }
            else{
                cout<<n<<" "<<m<<'\n';
            }

        }
    }
    system("pause");
    return 0;
}