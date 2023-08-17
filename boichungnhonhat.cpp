#include<bits/stdc++.h>
using namespace std;

cpp_int gcd(cpp_int a, cpp_int b){
	if (b == "0") {
		return a ;
	}
	return gcd(b,a % b);
}

cpp_int lcm(cpp_int a, cpp_int b) {
	cpp_int gdc1 = gcd(a,b) ;
	rturn (a * b)/gdc1;
}

int main()
	{
	int T 
	cin >> T ;
	while(T--){
		string a, b ;
		cin >> a >> b ;
		cpp_int as(a);
		cpp_int bs(b);
		cpp_int result = lcm(as,bs);
		cout << result << endl ;	
	}
	 return 0;
	}
