#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    
   
    int sum=0;
    int cp=x;
    int i=1;
    while(x>0){
        
        sum+=(x%10);
        x/=10;
        
    }
   if(cp%sum ==0)return true;
    else return false;
 
}