#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string reverseWords(const string& sentence) {// khởi tạo hàm đảo ngược từng kí tự trong câu
    istringstream iss(sentence);// phân tach các từ trong câu thành các từ riêng lẻ khi khổi tạo vòng lặp while
    string word;
    string reversedSentence;

    while (iss >> word) {
        reverse(word.begin(), word.end());
        reversedSentence += word + " ";
    }

    reversedSentence.pop_back();  // Xóa dấu cách cuối cùng
    return reversedSentence;
}

int main() {
    string inputSentence;
    getline(cin, inputSentence);

    string reversedSentence = reverseWords(inputSentence);
    cout  << reversedSentence << endl;

    return 0;
}
// Đảo ngược từng từ có trong câu
