#include<bits/stdc++.h>
using namespace std;

void tescase(){
	int n , m , k ;
	cin >> n  >> m >> k ;
	int a[n], b[m] ;
	vector<int>c(m+n+1);
	multiset<int>s;
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i];
		s.insert(a[i]);
	}
	for (int i = 0 ; i < m ;  i++){
		cin >> b[i];
		s.insert(b[i]);
	}
	set<int>::iterator it = s.begin();
	advance(it,k-1);
	int number = * it ;
	cout << number ;
}
int main()
	{
	int T ;
	cin >> T ;
	while(T--){
		tescase();
		cout << endl ;
	}
	 return 0;
	}
