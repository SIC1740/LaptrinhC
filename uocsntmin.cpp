#include<bits/stdc++.h>
using namespace std;
int snt (long long n ){
	for (long long i = 2 ; i <= sqrt (n); i ++){
		if (n%i == 0) {
			return 0 ; 
			break;
		}
	}
	return n >1 ;
}

long long Test(long long n ){
	int count = 0 ;
	for (long long i = 2 ; i <= sqrt(n) ; i ++){
		if (n % i == 0 && snt(i)){
			return i ;
		}
	}
	 return n ;
}
int main()
	{
	long long n ;
	cin >> n ;
	for (long long i = 1 ; i <= n ; i ++){
		if (i == 1) cout << "1" << endl;
		else if (i % 2 == 0) cout << "2"<<endl;
		else if (snt(i)) cout << i <<endl;
		else cout << Test(i) <<endl;
	}
	 return 0;
	}
