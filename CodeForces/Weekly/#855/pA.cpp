#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
void sol(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag = 0;
    if(s[0] != 'M'){
        if(s[0] != 'm'){
            cout<<"NO"<<'\n';
            return;
        }
    }
    if(s[s.length() - 1] != 'W'){
        if(s[s.length() - 1] != 'w'){
            cout<<"NO"<<'\n';
            return;
        }
    }
    for(int i = 0 ; i < s.length() ; i++){
        if(flag == 0){
            if(s[i] == 'e' || s[i] == 'E'){
                flag = 1;
            }
            else if(s[i] != 'M'){
                if(s[i] != 'm'){
                    cout<<"NO"<<'\n';
                    return;
                }
            }
        }
        if(flag == 1){
            if(s[i] == 'o' || s[i] == 'O'){
                flag = 2;
            }
            else if(s[i] != 'e'){
                if(s[i] != 'E'){
                    cout<<"NO"<<'\n';
                    return;
                }
            }
        }if(flag == 2){
            if(s[i] == 'w' || s[i] == 'W'){
                flag = 3;
            }
            else if(s[i] != 'o'){
                if(s[i] != 'O'){
                    cout<<"NO"<<'\n';
                    return;
                }
            }
        }if(flag == 3){
            if(s[i] != 'w'){
                if(s[i] != 'W'){
                    cout<<"NO"<<'\n';
                    return;
                }
            }
        }
    }
    cout<<"YES"<<'\n';
}
int main(){
    //chen;
    int t;
    cin>>t;
    while(t--){
        sol();
    }
    system("pause");
    return 0;
}