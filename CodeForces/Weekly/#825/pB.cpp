#include <iostream>
using namespace std;
//4 8 8 4
int main(){
    int t,n;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n;
            for(int j=0;j<n;j++){
                cin>>a[j];
            }
            b[0]=a[0];
            b[n-1]=a[n-1];
            for(int j=1;j<n-1;j++){
                b[j]=a[j-1]*a[j];
            }
        }
    }
    system("pause");
    return 0;
}