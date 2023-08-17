#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	long long a[n];
	for (int i = 0 ; i < n ;i ++){
		cin >> a[i];
	}
	sort(a,a+n);
	
	for (int i = n-1 ; i > n/2 ; i --){
		cout << a[i]<< " " << a[n-1-i] << " " ;
	}
	if (n % 2 != 0) cout << a[n/2] ;
		else cout  << a[n-n/2] << " " << a[n/2-1];
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
