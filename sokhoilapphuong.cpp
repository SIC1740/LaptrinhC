#include<bits/stdc++.h>
using namespace std;

bool test(string z, string str){
	int index = 0 ;
	for (int i = 0 ; i < str.length(); i ++){
		if (z[index] == str[i]){
			index ++ ;
		}
	}
	return index == z.length();
}
void testcase(){
	long long x ;
	cin >> x ;
	long long y = cbrt(x);
	string str = to_string(x);
	
	for (long long i = y ; i >= 1; --i){
		long long s = pow(i,3);
		string z = to_string(s);
		if(test(z,str)){
			cout <<  z;
			return ;
		}
	}
	cout << "-1" ;
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
