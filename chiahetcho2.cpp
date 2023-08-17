#include<bits/stdc++.h>
using namespace std;

void testcase(){
	long long n ;
	cin >> n ;
	int count = 0 ;
	for (int i = 1 ; i <=sqrt(n) ; i ++){
		if ( n % i == 0){
			if (i % 2 == 0 ){
				count ++;
			}
			if (n/i % 2 == 0){
				count ++ ;
			}
			if (n/i == i && i % 2 == 0)
				count --;
		}
	}
	cout << count ;
	
}
int main()
	{
	ios_base::sync_with_stdio;
	cin.tie(NULL) ; cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl;
	}
	 return 0;
	}
