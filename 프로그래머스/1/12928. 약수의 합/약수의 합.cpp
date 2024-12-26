#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i=1;
    if(n>0 &&n<3000){
    while(1){
        if(i==n){
            answer += i;
                break;
                }
        if(n%i == 0){
            answer += i;
        }
        i++;
    }
    }
    return answer;
}