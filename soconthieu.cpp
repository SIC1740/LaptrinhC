#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	vector<int>a(n+1);
	for(int i = 1 ; i <= n-1 ; i ++){
		cin >> a[i];
	}
	for (int i = 1 ; i <= n-1 ; i ++){
		if (a[i] != i){
			cout << i;
			return ;
		}
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL) ;
	
	int T ;
	cin >> T ;
	while(T--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
