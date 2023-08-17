#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	int a[n];
	int b[n] = {0};
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i];
		if(a[i] == 0){
			b[a[i]] ++;
		}
	}
	sort(a,a+n);
	long long num1 = 0, num2 = 0;
	for (int i = b[0] - 1; i < n ;++i){
		if (i + 1 < n){
			num1 = num1*10 + a[i];
			num2 = num2*10 + a[i+1];
			++i;
		}
		else {
			num1 = num1*10 + a[i];
		}
	}
	cout << num1+num2;
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout <<  endl ;
	}
	 return 0;
	}
