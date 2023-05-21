#include <bits/stdc++.h>
using namespace std;
#define chen ios::sync_with_stdio(0);cin.tie(0)
int main(){
    //chen;
    int t;
    double r,r1;
    cin>>t>>r>>r1;
    vector<double> l1(t);
    vector<double> l2(t);
    vector<double> r2(t);
    for(int i = 0 ; i < t ; i++){
        cin>>l1[i]>>l2[i];
    }
    for(int i = 0 ; i < t ; i++){
        r2[i] = r1 * l2[i] / l1[i];
    }
    double rv = 0;
    for(int i = 0 ; i < t ; i++){
        rv = rv + r2[i];
    }
    rv = rv / t;
    printf("%.2lf ",rv);
    rv = abs(rv - r) / r;
    rv = rv * 100;
    printf("%.2lf",rv);
    system("pause");
    return 0;
}