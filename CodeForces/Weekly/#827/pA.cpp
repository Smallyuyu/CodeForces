#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    while(cin>>t){
        for(int i=0;i<t;i++){
            int map[3];
            for(int j=0;j<3;j++){
                cin>>map[j];
            }
            sort(map,map+3);
            if(map[0]+map[1]==map[2]){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}