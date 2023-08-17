#include<bits/stdc++.h>
using namespace std;

using ll = long long ;


bool stn(ll n){
    int i, sum = 0 ;
    ll a = n ;
    while (n){
        i = n % 10 ;
        sum = sum * 10 + i;
        n/=10 ;
    }
    return a == sum ;
}
int stn1(ll n){
    int count = 0 ;
    for (int i = 2 ; i <= sqrt(n);i ++){
        if (n % i == 0) count ++ ;
        while (n % i == 0){
            n/= i;
        }
    }
    if (n != 1) count ++ ;
    if (count >= 3) return 1 ;
    else return 0 ;
}
int main()
    {
    ll n , m ;
    cin >> n >> m ;
    int count = 0 ;
    for (int i = n ; i <= m ; i ++){
        if (stn(i) && stn1(i)){
            count++ ;
            cout << i << " " ;
        }
    }
    if (count == 0) cout << "-1" ;
     return 0;
    }
