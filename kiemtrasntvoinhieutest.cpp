#include <iostream>
#include <vector>

int sieveOfEratosthenes(int N, int K) {
    std::vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    std::vector<int> primeNumbers;
    for (int i = 2; i <= N; ++i) {
        if (isPrime[i]) {
            primeNumbers.push_back(i);
        }
    }

    for (int i = 0; i < K - 1; ++i) {
        int P = primeNumbers[0];
        for (int j = 0; j < primeNumbers.size(); ++j) {
            if (primeNumbers[j] % P == 0) {
                primeNumbers.erase(primeNumbers.begin() + j);
                --j;
            }
        }
    }

    return primeNumbers[0];
}

int main() {
    int N, K;
    std::cin >> N;
    std::cin >> K;

    int kthRemovedNumber = sieveOfEratosthenes(N, K);
    std::cout << kthRemovedNumber ;

    return 0;
}
