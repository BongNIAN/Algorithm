#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int tmp=10;
    while(tmp>0){
        tmp=n/10;
        answer+= n%10;
        n /=10;
    }

    return answer;
}