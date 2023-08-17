#include<bits/stdc++.h>
using namespace std;

int test1(long long n ){
	int sum = 0 ;
	while(n>9){
		sum += n% 10;
		n /= 10 ;
	}
	return sum + n;
}
bool test2(long long n){
	int s = test1(n);
	int sum = 0 ;
	int tmp = n ;
	for (long long i = 2 ; i < sqrt(n); i ++){
		while(n % i == 0){
			sum += test1(i) ;
			n /= i ;
		}
	}
	if (tmp == n ){
		return false ;
	}
	if (n != 1) sum += test1(n);
	return sum == s ;
}
void testcase(){
	long long n ;
	cin >> n ;
//	cout << test1(n)<< " "<< test2(n);
	if (test2(n)){
		cout << "YES";
	}
	else cout << "NO";
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ; 
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
