#include <iostream>
#include <algorithm>
using namespace std;
struct x{
    int position;
    int dressed;
};
int main(){
    int t,n;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>n;
            x map[n];
            cin>>map[0].position;
            int max=map[0].position;
            int minn=map[0].position;
            int sum=map[0].position;
            for(int j=1;j<n;j++){
                cin>>map[j].position;
                sum=sum+map[j].position;
                if(map[j].position>max){
                    max=map[j].position;
                }
                if(map[j].position<minn){
                    minn=map[j].position;
                }
            }
            sum=sum/n;
            int mmm=-1;
            int mmmm;
            for(int j=0;j<n;j++){
                cin>>map[j].dressed;
                if(map[j].dressed>mmm){
                    mmm=map[j].dressed;
                    mmmm=map[j].position;
                }
            }
            double increase,minposition=map[0].position;
            double min=99999999;
            double tmp[n];
            double xx,yy;
            if(mmmm>sum){
                xx=sum;
                yy=mmmm;
            }
            else{
                xx=mmmm;
                yy=sum;
            }
            for(double j=xx;j<=yy+1;j=j+(0.1)){
                for(int k=0;k<n;k++){
                    tmp[k]=0;
                    double p=map[k].position;
                    if(j>=p){
                        increase=j-p;
                    }
                    else{
                        increase=p-j;
                    }
                    double d=map[k].dressed;
                    tmp[k]=d+increase;
                }
                sort(tmp,tmp+n);
                if(tmp[n-1]<min){
                    min=tmp[n-1];
                    minposition=j;
                }
            }
            cout<<minposition<<'\n';
        }
    }
    system("pause");
    return 0;
}