#include <vector>
#include <iostream>
using namespace std;

//여기에서 Cnt != 루트a까지만 해도 된다
bool IsPrimeNum(int a)
{
    int cnt=2;
   while(cnt!=a)
   {
       if(a%cnt==0) return false;
       cnt++;
   }
    cout<<"cnt is : "<<a<<endl;
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;

    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                if(IsPrimeNum(nums[i]+nums[j]+nums[k]))answer++;
            }
        }
    }

    return answer;
}