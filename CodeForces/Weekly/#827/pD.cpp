#include <iostream>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int gcdd(long int x,long int y){
    while((x%=y) && (y%=x));
    return x+y;
}
int main(){
    chen;
    int t,n,i,j,h,map[200001];
    int pp[1002][1002];
    for(int i=1;i<=1001;i++){
        for(int j=1;j<=1001;j++){
            pp[i][j]=0;
            if(gcdd(i,j)==1){
                pp[i][j]=1;
                pp[j][i]=1;
            }
        }
    }
    while(cin>>t){
        for(i=0;i<t;i++){
            cin>>n;
            for(j=0;j<n;j++){
                cin>>map[j];
            }
            int max=-1;
            int start=0;
            int end=n-1;
            int tmp;
            while(start<=end){
                int flag=0;
                for(int h=start;h<=end;h++){
                    if(pp[map[h]][map[end]]==1){
                        if(h+end+2 > max){
                            max=h+end+2;
                            tmp=h;
                            flag++;
                        }
                    }
                }
                if(flag!=0){
                    start=tmp+1;
                }
                end--;
            }
            cout<<max<<'\n';
        }
    }
    system("pause");
    return 0;
}