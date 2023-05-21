#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int t;
    char map[8][8];
    while(cin>>t){
        for(int i=0;i<t;i++){
            string a;
            getline(cin,a);
            for(int j=0;j<8;j++){
                for(int h=0;h<8;h++){
                    cin>>map[j][h];
                }
            }
            int r=0,b=0;
            for(int j=0;j<8;j++){
                if(map[j][0]=='R'){
                    if(map[j][0]==map[j][1]){
                        if(map[j][0]==map[j][2]){
                            if(map[j][0]==map[j][3]){
                                if(map[j][0]==map[j][4]){
                                    if(map[j][0]==map[j][5]){
                                        if(map[j][0]==map[j][6]){
                                            if(map[j][0]==map[j][7]){
                                                r++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if(map[0][j]=='B'){
                    if(map[0][j]==map[1][j]){
                        if(map[0][j]==map[2][j]){
                            if(map[0][j]==map[3][j]){
                                if(map[0][j]==map[4][j]){
                                    if(map[0][j]==map[5][j]){
                                        if(map[0][j]==map[6][j]){
                                            if(map[0][j]==map[7][j]){
                                                b++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if(r!=0){
                cout<<"R"<<'\n';
            }
            else{
                cout<<"B"<<'\n';
            }
        }
    }
    system("pause");
    return 0;
}