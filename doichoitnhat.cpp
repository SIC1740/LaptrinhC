#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	int a[n];
	for (int &x: a ) cin >> x ;
	int ans = 0 ;
	for (int i = 0 ; i < n ; i ++){
		int tmp = i ; 
		for (int j = i + 1; j < n ; j++){
			if (a[j] <= a[tmp])
				tmp = j ;
		}
		if (tmp != i && a[i] != a[tmp]){
			ans ++ ;
		swap(a[i],a[tmp]);
		}
	}
	cout << ans ;
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl;
	}
	 return 0;
	}
