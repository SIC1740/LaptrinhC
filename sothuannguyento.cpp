#include<bits/stdc++.h>
using namespace std;

int snt (long long n){
	for (int i = 2; i <= sqrt(n) ; i ++){
		if (n % i == 0 ){
			return false ;
		}
	}
	return n > 1 ;
}
int sumnumber(long long n){
	int sum = 0 ;
	while (n){
		sum += n % 10 ;
		n /= 10 ;
	}
	if (snt(sum) == 0) return 0 ;
	else return 1 ;
}
int number(long long n){
	while (n){
		int a = n % 10 ;
		if (snt (a) == 0) {
			return 0 ;
			break ;
		}
		n /= 10 ;
	}
	return 1 ;
}
int main()
	{
	long long T ;
	cin >> T; 
	while(T--){
		long long n , m ; 
		cin >> n >> m ;
		int count = 0 ;
		  // Tạo một mảng để lưu trữ trạng thái của các số từ 0 đến n
	    vector<bool> isPrime(m + 1, true);
	
	    // Đánh dấu các số 0 và 1 là false (không phải số nguyên tố)
	    isPrime[0] = isPrime[1] = false;
	
	    // Bắt đầu từ số 2 (số nguyên tố đầu tiên)
	    for (int i = 2; i * i <= m; i++) {
	        // Nếu i là số nguyên tố
	        if (isPrime[i] == true) {
	            // Đánh dấu tất cả các bội số của i là false
	            for (int j = i * i; j <= m; j += i)
	                isPrime[j] = false;
	        }
	    }
		for (long long k = n ; k <= m ; k ++){
			if (isPrime[k] && sumnumber(k) && number(k) )count ++;
		}
		cout << count << endl;
	}
	 return 0;
	}
