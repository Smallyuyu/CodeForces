#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int gcd(int x,int y){
    while((x%=y)&&(y%=x));
    return x+y;
}
int main(){
    //chen;
    int a,b;
    cin>>a>>b;
    if(gcd(a,b) == a || gcd(a,b) == b) cout<< a + b;
    else cout << b - a;
    system("pause");
    return 0;
}