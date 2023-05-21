#include <iostream>
using namespace std;
int main(){
    int t,n,k;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n>>k;
            long long int s[k+1];
            long long int a[n+1];
            int ff=0;
            cin>>s[0];
            for(int j=1;j<k;j++){
                cin>>s[j];
                if(s[j-1]>s[j]){
                    ff++;
                }
            }
            if(ff!=0){
                cout<<"No"<<'\n';
                continue;
            }
            if(k<1 || n<1){
                cout<<"No"<<'\n';
                continue;
            }
            if(k==1){
                cout<<"Yes"<<'\n';
                continue;
            }
            double tmp=n-k+1;
            double bb=s[0];
            double index=bb/tmp;
            double tmpp=s[1]-s[0];
            if(index>tmpp){
                cout<<"No"<<'\n';
            }
            else{
                cout<<"Yes"<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}