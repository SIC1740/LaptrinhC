#include<bits/stdc++.h>
using namespace std;

vector<int>a;
void testcase(){
	int n , s;
	cin >> n >> s ;
	a.resize(n+1);
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i];
	}
	vector<bool>vs(s+1,false);
	vs[0] = true;
	for (int i = 0 ; i < n ; i ++ ){
		for (int j = s ; j >= a[i]; j --){
			if(vs[j-a[i]]){
				vs[j] = true;
			}
		}
	}
	if (vs[s]) cout << "YES";
	else cout << "NO";
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
