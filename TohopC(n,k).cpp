#include<bits/stdc++.h>
using namespace std;

//const int MOD = 1e9+7;
//long long C[1001][1001];
const int MOD = 1e9 + 7;

long long C[1001][1001];

void prepare(){
	for (int i = 0 ; i <= 1000 ; ++i){
		for (int j = 0 ; j <= i ; ++j ){
			if (j == 0 || j == i){
				C[i][j] = 1;
			}
			else if (j == 1 || j == i -1)
				C[i][j] = i ;
			else
				C[i][j] = C[i-1][j-1] + C[i-1][j];
				long long a = C[i][j];
			C[i][j] %= MOD;
		}
	}
}
//void prepare() {
//    for (int i = 0; i <= 1000; ++i) {
//        for (int j = 0; j <= i; ++j) {
//            if (j == 0 || j == i)
//                C[i][j] = 1;
//            else if (j == 1 || j == i - 1)
//                C[i][j] = i;
//            else
//                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
//            C[i][j] %= MOD;
//        }
//    }
//}

//void testcase(){
//	int n , k ;
//	cin >> n >> k ;
//	cout << C[n][k] ;
//	cout << C[n][k];
//}
void TestCase() {
    int n, k;
    cin >> n >> k;
    cout << C[n][k] << endl;
}

int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		TestCase();
		cout << endl;
	}
	 return 0;
	}
