#include<bits/stdc++.h>
using namespace std;

int max(int n){
	int a = n % 10 ;
	int b = 0 ;
	while (n){
		n /= 10 ;
		b = n % 10 ;
		if (b > a) {
			return 0 ;
			break ;
		}
	}
	return 1;
}
int main()
	{
	int n ;
	cin >> n ;
	int count = 0 ;
	vector<bool> isPrime(n+1, true);
	isPrime[0] = isPrime[1] = false ;
	for (int i = 2 ; i * i <= n ; i ++){
		if (isPrime[i] == true){
			for (int j = i * i; j <= n ; j += i){
				isPrime[j] = false ;
			}
		}
	}
	for (int i = 2 ; i <= n ; i ++){
		if (isPrime[i] && max(i)){
			++ count ;
			cout << i << " " ;
		}
	}
	cout << endl << count ;
	 return 0;
	}
