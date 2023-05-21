#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
map<string,int> digitmap;
long long int digit(long long int n){
    int sum = 0;
    string x = to_string(n);
    for(int i = 0 ; i < x.length() ; i++){
        sum = sum + (x[i] - '0');
    }
    return sum;
}
int main(){
    //chen;
    long long int t,n,x,y,left,right,ax,w;
    cin>>t;
    while(t--){
        cin>>n;
        w = n / 2;
        if(n % 10 != 9){
            if(!(n & 1)){
                cout<<w<<" "<<w<<'\n';
            }
            else{
                cout<<w<<" "<<w + 1<<'\n';   
            }
        }
        else{
            left = w;
            right = left + 1;
            ax = abs(digit(left) - digit(right));
            while(ax > 1){
                left = left - (ax / 2);
                right = right + (ax / 2);
                ax = abs(digit(left) - digit(right));
            }
            cout<<left<<" "<<right<<'\n';
        }
    }
    system("pause");
    return 0;
}