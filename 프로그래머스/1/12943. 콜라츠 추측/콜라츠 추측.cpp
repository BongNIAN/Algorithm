#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long numCast = static_cast<long long>(num); //오버플로우의 중요성 !
    int cnt=0;
    int answer = 123;
    
    if(numCast==1){return 0;}
    
    for(int i=0;i<500;i++){
        if(numCast == 1){return cnt;}
       
        if(numCast%2 == 0){numCast/=2;cnt++;}
        else {numCast = (numCast*3)+1;cnt++;}
        
    }
    
    if(cnt==500){return -1;}
    
    return answer; //이거 매우중요하네..이거아니면 컴파일러에서 illegal instruction걸리는구나..
    
    
    
}