#include<bits/stdc++.h>
using namespace std;
bool prepare(int n ){
	int a = n % 10 ;
	while(n>=10){
		n/=10;
	}
	return n == a;
}
void testcase(){
	int n ;
	cin >> n ;
	if (prepare(n))
		cout << "YES" ;
	else cout << "NO" ;
}
int main()
	{
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ; cout.tie(NULL);
	
	int T ;
	cin >> T ;
	while(T--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
