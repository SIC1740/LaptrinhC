#include<bits/stdc++.h>
using namespace std;

void testcase(){
	long long  p , q ;
	cin >> p >> q ;
	while(1){
		if (q % p == 0){
			cout << "1/" << q/p;
			return ;
		}
		long long x = q / p + 1  ;
		cout << "1/" << x <<" + " ;
		p = p*x - q ;
		q *= x ;
	}
}
int main()
	{
	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
