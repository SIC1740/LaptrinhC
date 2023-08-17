#include<bits/stdc++.h>
using namespace std;

void testcase(){
	long long n ;
	cin >> n ;
	int a[10] = {1000,500,200,100,50,20,10,5,2,1};
	int count = 0 ;
	for (int i = 0 ; i < 10 ; i ++){
		count += n/a[i];
		n %= a[i];
	}	
	cout << count ;
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl;
	}
	 return 0;
	}
