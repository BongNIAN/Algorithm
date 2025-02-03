#include <string>
#include <vector>
#include <cmath>

using namespace std;

           

int divid(int num)
{
    int cnt=0;
    //제곱수변환 

    
    for(int i=1;i<=static_cast<int>(std::sqrt(num));i++)
    {
        if(num%i == 0)
        {
            cnt+=2;
        }
        if(i*i==num)
        {
            cnt-=1;
        }
        
    }    
        return cnt;
}


int solution(int number, int limit, int power) {
    int answer = 0;
    int cnt=0;
    for(int i=1;i<=number;i++)
    {
        cnt = divid(i);
        if(cnt >limit){cnt = power;}
        
        answer+=cnt;
        
        
        
        
    }
    
    
    return answer;
}