#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    vector <long long> digits;
    long long answer=0;
    long long multiplier=1;
   
  
    while(n>0){
        digits.push_back(n%10);
        n/=10;
    }
    
  int size = digits.size();
    
    
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(digits[j+1]<digits[j]){
                int tmp = digits[j];
                digits[j] = digits[j+1];
                digits[j+1] = tmp;
                
            }
            
        }
        
    }
   
  
    for(int i=0;i<digits.size();i++){
        answer += (digits[i]*multiplier);
        multiplier*=10;
        
        
    }
    
    
   
    
    return answer;
}