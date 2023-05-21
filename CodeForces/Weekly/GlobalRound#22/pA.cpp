#include <iostream>
#include <algorithm>
using namespace std;
//0=fire , 1=frost
int main(){
    int t,n;
    while(cin>>t){
        for(int i=0;i<t;i++){
            int k=0,h=0;
            long long int sum=0;
            cin>>n;
            int type[n+1];
            long long int fire[n+1];
            long long int frost[n+1];
            long long int damage[n+1];
            for(int j=0;j<n;j++){
                cin>>type[j];
            }
            for(int j=0;j<n;j++){
                cin>>damage[j];
                if(type[j]==0){
                    fire[k]=damage[j];
                    k++;
                }
                else{
                    frost[h]=damage[j];
                    h++;
                }
            }
            sort(damage,damage+n);
            sort(fire,fire+k);
            reverse(fire,fire+k);
            sort(frost,frost+h);
            reverse(frost,frost+h);
            int x=0,y=0;
            while(x<k && y<h){
                fire[x]=fire[x]*2;
                x++;
                frost[y]=frost[y]*2;
                y++;
            }
            for(int j=0;j<k;j++){
                sum=sum+fire[j];
            }
            for(int j=0;j<h;j++){
                sum=sum+frost[j];
            }
            if(k==h){
                sum=sum-damage[0];
            }
            cout<<sum<<'\n';
        }
    }
    system("pause");
    return 0;
}