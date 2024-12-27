#include <string>
#include <vector>
#include<cmath>
using namespace std;

int solution(int left, int right) {
   
    int answer = 0;
    int check=0;
    for(int i=left ;i<=right ; i++){
        check = static_cast<int>(sqrt(i));
        if (check*check == i){
            // 약수 홀수 
            answer-=i;
        }
        else {
            // 약수 짝수
            answer += i;
        }
        
    }
    /*
    약수가 짝수 -> 1/2까지만 
    무언가가 나눠졌다면 반드시 그 짝은 존재하게 됩니다
    하지만 그 짝이 존재하지 않으려면 제곱수이면 됩니다.
    내 생각 ) 다 더하고 제곱인것만 찾아서 2배로 빼준다
    그러면 제곱인걸 어떻게 효율적으로 찾아볼까?
    1 2 4 9 16 25 
    루트를 씌우는건 ㄹㅇ 좋은방법인것 같다 
    왜냐하면 루트를 씌우고 소수점 내리게되면
    제곱같은경우에는 그냥 일반값이 될것이고 
    
    */ 
                                   
                                 
                                   
    

    return answer;
}