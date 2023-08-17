#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	queue<string>qe;
	vector<string>vt;
	qe.push("1");
	vt.push_back("1");
	while (qe.size() <= 10000 ){
		string res = qe.front();
		qe.pop();
		vt.push_back(res+"0");
		vt.push_back(res+"1");
		qe.push(res+"0");
		qe.push(res+"1");
	}
	for( int i = 0 ; i < n ;  i ++){
		cout << vt[i] << " ";
	}
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
