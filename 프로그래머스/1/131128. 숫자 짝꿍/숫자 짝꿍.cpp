#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
     int TempX[10] = {0}, TempY[10] = {0};
    
    for(char c : X) {
        TempX[c - '0']++;
    }
    for(char c : Y) {
        TempY[c - '0']++;
    }
    
    string result;
    for (int d = 9; d >= 0; d--) {
        int commonCount = min(TempX[d], TempY[d]);
        result.append(commonCount, '0' + d);
    }
    
    if(result.empty()) return "-1";
    
    if(result[0] == '0') return "0";
    
    return result;
}