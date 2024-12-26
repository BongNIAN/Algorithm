#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    double answer = 0;
    answer = static_cast<double>(num1)/num2;
    answer*=1000;
    static_cast<int>(answer);
    
    return answer;
}