#include <iostream>
using namespace std;
//Jun 27,  Simplifies the 2 numbers using gcf


int gcd(int u, int v){
    int t;
    while(u > 0){
        if(u < v){
            t=u; // 128 & 200 --> 200 & 128
            u = v;
            v = t;
        }
        u = u-v;
    }
    return v;
}
int main(){
    int x;
    int y;
    while(cin >> x && cin >> y){
        if(x>0 && y > 0){
            cout<<x/gcd(x,y)<<' '<< y/gcd(x,y) <<" The common factor was "<<gcd(x,y)<<'\n';
        }
    }
}