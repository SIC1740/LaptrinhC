#include <iostream>
#include <string>
#include<cctype>

using namespace std;

int main() {
    int count = 0;
    string sentence;
    char c;
    getline(cin, sentence);
    cin>>c;
    char b = toupper(c) ;
    for (char a : sentence) {
        if (a == c || a == b ) {
            count++;
        }
        
    }
    cout << count<<endl;
    return 0;
}
