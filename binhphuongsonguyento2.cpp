#include<bits/stdc++.h>
using namespace std ;

using ll = long long ;

int sodep2(int n){
	int ok = 0 ; // check dieu kien can
	for (int i = 2 ; i <= sqrt (n) ; i ++){
		int cnt = 0 ;
		while (n % i == 0){
			++ cnt ;
			n /= i ;
		}
		if (cnt == 1 ) return 0 ;
		if (cnt >= 2 ) ok = 1 ;
	}
	if (n != 1 ) 
	return 0 ;
	return ok;
}

int main(){
	int a , b ;
	cin >> a >> b ;
	for (int i = a ; i <= b ; i ++){
		if (sodep2(i)) cout << i << " " ;
	}
	return 0 ;
}