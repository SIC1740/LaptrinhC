#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n , s;
	cin >> n >> s ;
	int s1 = s;
	if (s > 9 * n || s == 0) {
		cout << "-1 -1 ";
		return ;
	}
	int a[n]= {1};
	s-- ;
	for (int i = n - 1 ; i >= 0 ; --i){
		int x = min(s,9-a[i]);
		a[i]+= x ;
		s -= x ;
	}
	for (int i = 0 ; i < n ; i ++){
		cout << a[i];
	}
	cout << " ";
	if (s1 <= 9){
		int b[n]={s1};
		for (int i = 0 ; i < n; i ++){
			cout << b[i];
		}
	}
	else {
		int b[n] = {9};
		s1-= 9;
		for (int i = 0 ; i < n ; i ++){
			int x = min(s1,9-b[i]);
			b[i]+= x ;
			s1-= x;
		}
		for (int i = 0 ; i < n ; i ++){
			cout << b[i];
		}
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	testcase();
	 return 0;
	}
