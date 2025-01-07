
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int solution(vector<int> number) {
//     int count = 0;

    
//     sort(number.begin(), number.end());

   
//     for (size_t i = 0; i < number.size() - 2; i++) {
//         size_t left = i + 1; 
//         size_t right = number.size()-1; 

        
//         while (left < right) {
//             int sum = number[i] + number[left] + number[right];

//             if (sum == 0) {
//                 count++;
//                 right--;
//                 if(left +1 ==right){left++;}
//             } else if (sum < 0) {
//                 left++; // 합이 작으면 왼쪽 포인터를 오른쪽으로 이동
//             }
          
//             else {
//                 right--; // 합이 크면 오른쪽 포인터를 왼쪽으로 이동
//             }
            
            
//         }
//     }

//     return count;
// }
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> number) {
    int count = 0;
    
    int size = number.size();
    for(int i=0;i<size;i++){
        for(int j=i+1 ; j<size;j++){
            for(int k=j+1;k<size;k++){
                if(number[i] + number[j] + number[k] ==0){
                    count++;
                    
                }
                
            }
            
        }
        
    }

    return count;
    
}
