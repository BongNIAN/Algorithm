#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [n](const string& a, const string& b) {
        // n번째 문자를 비교
        if (a[n] == b[n]) {
            return a < b; // n번째 문자가 같으면 전체 문자열 사전순 정렬
        }
        return a[n] < b[n]; // n번째 문자 기준 정렬
    });

    return strings;
}



