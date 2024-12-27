#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    //모두찾아 더한수 , 없는 수 
    //그러면 중복이 되는가 안되는가?
    //만약에 중복이 안된다면 45에서 빼면되는데 
    //왜냐하면 n^2에서 n으로 시간복잡도가 줄어드니깐 일단한번 구현해보고 안되면 깡으로가자
    
    
    int answer = -1;
    int sum=0;
    for(int i=0;i<numbers.size();i++)
    {
        sum+=numbers[i];
        
    }
    
    return 45-sum;
}