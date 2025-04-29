#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    long long result = 0;
    for (long long d = 1; d <= N; ++d) {
        result += d * (N / d);
    }

    cout << result << "\n";
    return 0;
}