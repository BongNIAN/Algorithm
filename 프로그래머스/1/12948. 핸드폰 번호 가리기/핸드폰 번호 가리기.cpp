#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    answer=phone_number;
    int size = phone_number.size();
    for(int i=0;i<size-4;i++){
    answer.replace(i,1,"*");    
    }
    
    
    return answer;
}