#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;
int a[1005], n;
bool check(){
	set<int> se; se.insert(a[1]);
	for(int i = 2; i <= n ;i++){
		if(abs(a[i] - a[i - 1]) == 1) return false;
		se.insert(a[i]);
	}
	return se.size() == n;
}

void init(){
	cin >> n;
	memset(a, false, sizeof(a));
	for(int i = 1; i <= n; i++)
		a[i] = i;
}
void implement(){
	init();
	do{
		if(check()){
			for(int i = 1; i <= n; i++)	
				cout << a[i];
			cout << endl;
		}
		
	}
	while(next_permutation(a + 1, a + n + 1));
}
int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		implement();
		cout << endl;
	}
	
	return 0;
}