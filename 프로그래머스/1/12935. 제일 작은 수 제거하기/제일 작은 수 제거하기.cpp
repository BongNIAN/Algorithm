#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    
    int min=0;
    if(arr.size()<=1) {
        if(arr.size()==0){arr.push_back(-1);
                        }
        for(int i=0;i<arr.size();i++){
            arr.pop_back();
        }
        arr.push_back(-1);
        
        return arr;
    }
    
    //한바퀴 n 그다음 n 2n정도면 괜찮은건가? 
    for(int i=0;i<arr.size();i++){
        if(i==0){min = arr[i];}
        if(i!=0){
            if(min > arr[i]){
                
                min = arr[i];
            }    
        }
    }
    
    
    for(int i=0;i<arr.size();i++){
        
      arr.erase(remove(arr.begin(), arr.end(),min),arr.end());
        
    }
    
    
    
    
    
    return arr;
}