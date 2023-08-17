#include<bits/stdc++.h>
using namespace std;

bool check(string s , int i){
	return (s[i-1] == '1' || s[i-1] =='2' && s[i] <= '6');
}

void testcase(){
	string s ;
	cin >> s ;
	int n = s.length();
	s = '#'+s;
	vector<long long>vs(n+1,0);
	vs[0] = 1;
	for (int i = 1; i <= n ; i ++){
		if (s[i]=='0'){
			if (i == 1 || s[i-1] != '1' && s[i-1] != '2'){
				cout << 0;
				return ; 
			}
			vs[i] = vs[i-2];
		}
		else {
			vs[i] = vs[i-1];
			if (i >= 2 && check(s,i)){
				vs[i] += vs[i-2];
			}
		}
	}
	cout << vs[n];
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
