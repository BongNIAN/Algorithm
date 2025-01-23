#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int k, int m, vector<int> score) {
     int answer = 0;
    sort(score.begin(),score.end(),[](int a,int b)->bool{
        return a<b;
    });
    
   
    /*현재 코드에서 it + m은 새로운 이터레이터를 반환할 뿐, 원래 이터레이터 it에는 영향을 주지 않습니다. 이를 it += m로 수정하면        실행 시간이 정상적으로 줄어듭니다.
*/
    /**지금이야 연습삼아서 써봤지만 원래는 vector는 index로 탐색해야 빠르다
    비용이 크다 it은 
    */
   
    for(auto it = score.rbegin();it!=score.rend();it+=m)
    {
        if(it+m > score.rend())
        {
            
        break;
        }
        
        answer =answer +  (*(it+m-1) * m) ; 
        
    }
    
    
    //근데 왜 112 222 444 4444....이게 그냥 오름차순 순서같지?
    //오름차순 순서대로 가면 최대이익이 나오나?
    //궁금하니깐 선 진행 후 생각 
    
   
    return answer;
}