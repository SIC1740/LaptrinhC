#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

bool stn(ll n){
	ll sum = 0 ;
	ll a = n ;
	while (n){
		sum = sum*10 + n%10 ;
		n /= 10 ;
	}
	return sum == a ;
}

int main()
	{
	long long T ;
	cin >> T ;
	while(T--){
		long long a , b ;
		cin >> a >> b ;
		vector<bool>isPrime(b+1,true) ;
		isPrime[0] = isPrime[1] = false ;
		
		for (int i = 2 ; i <= sqrt(b) ; ++i){
			if(isPrime[i] == true){
				for(int j = i * i ; j <= b ; j +=i){
					isPrime[j] = false ;
				}
			}
		}
		int count = 0 ;
		for (long long k = a ; k <= b ; k ++){
			if (isPrime[k] && stn(k)) {
				++ count;
				cout << k << " ";
				if (count == 10){
					a = k;
					cout << endl ;
					count = 0 ;
				}
			}
		}
		cout << endl << endl;
	}
	 return 0;
	}