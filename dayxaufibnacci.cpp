#include<bits/stdc++.h>
using namespace std;

long long fb[100];

void fibonacci(){
	fb[1] = fb[2] = 1 ;
	for (int i = 3 ; i < 100 ; i ++){
		fb[i] = fb[i-1] + fb[i-2];
	}
}

void testcase(){
	long long n , k ;
	cin >> n >> k ;
	while(true){
		if(n == 1 || n == 2){
			if (n == 1) cout << "A" ;
			else cout << "B" ;
			return ;
		}
		if (k > fb[n-2]){
			k -= fb[n-2] ;
			n -- ;
		}
		else n-=2 ;
	}
}

int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T ;
	cin >> T ;
	fibonacci();
	while(T--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
