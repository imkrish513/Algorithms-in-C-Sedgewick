#include <iostream>
using namespace std;
//find all prime numbers
//main premice used is that just multiply every number with every number
const int n = 1000;
int main(){
    int i,j,a[n+1];
    for(a[1]=0,i=2; i<=n;i++){ //goes through and makes all numbers prime
        a[i]=1;
    }
    for(i=2;i<=n/2;i++){ //goes through half
        for(j=2;j<=n/i;j++){ //so that i*j doesnt exceed n
            a[i*j]=0;
        }
    }
    for(i=1;i<=n;i++){ //if its 1 then print it out
        if(a[i]){
            cout<<i<<' ';
        }
    }
    cout<<'\n';
}


//find n primes