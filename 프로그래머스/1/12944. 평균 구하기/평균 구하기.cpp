#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int size = numbers.size();
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=numbers[i];
        
    }
    answer = static_cast<double>(sum) / size;
    
    return answer;
}
