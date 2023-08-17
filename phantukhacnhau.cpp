#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n;
	int a[n] , b[n-1];
	int count;
	for (int i = 0 ; i < n ;i ++){
		cin >> a[i];
	}
	for (int i = 0 ;i < n -1 ; i ++){
		cin >> b[i];
	}
	for (int i = 0 ; i < n ; i ++){
		if (a[i] != b[i]){
			count = i ;
			break;
		}
	}
	cout << count + 1;
}
int main()
	{
	int t ; 
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
