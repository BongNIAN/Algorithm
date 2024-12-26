#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long cnt=0;
    long long i=0;
    while(n >=i){
        
        if(n==(i*i)) {
            cnt=cnt+1;
                   answer = (i+1)*(i+1);
                   break;
                  }
        
        i=i+1;
    }
    
    
    if(cnt==0){return -1;}
     return answer;
}