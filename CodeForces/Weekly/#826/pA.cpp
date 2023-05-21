#include <iostream>
using namespace std;
int main(){
    int t,n;
    string a,b;
    while(cin>>t){
        for(int i=0;i<t;i++){
            cin>>a>>b;
            int ca=1,cb=1;
            for(int h=0;h<a.length()-1;h++){
                if(a[h]=='X'){
                    ca++;
                }
            }
            for(int h=0;h<b.length()-1;h++){
                if(b[h]=='X'){
                    cb++;
                }
            }
            if(a[a.length()-1]=='S'){
                ca=ca*(-1);
            }
            if(b[b.length()-1]=='S'){
                cb=cb*(-1);
            }
            if(a[0]=='M'){
                ca=0;
            }
            if(b[0]=='M'){
                cb=0;
            }
            if(ca>cb){
                cout<<">"<<'\n';
            }
            else if(ca<cb){
                cout<<"<"<<'\n';
            }
            else{
                cout<<"="<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}