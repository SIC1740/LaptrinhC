#include<bits/stdc++.h>
using namespace std;
int snt (long long n){
	for (int i = 2 ; i <= sqrt(n) ; i ++){
		if (n % i == 0) {
			return 0 ; 
			break ;
		}
	}
	return n>1 ;
}

int main()
	{
	long long n ;
	cin >> n ;
	if (snt(n)) cout << n << "^1";
	else{
		for (int i = 2 ; i <= n ; i ++){
			int count = 0;
			while (n%i == 0){
				count ++ ;
				n/=i ;
			}
			if (count > 0) {
				cout << i << "^" << count ;
				if(n>1) cout <<" * " ;
			}
		}
	}
	 return 0;
	}
