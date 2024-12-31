#include <string>
#include <vector>
#include<iostream>
using namespace std;
//최대공약수 x 최소공배수 = 두수의 곱 
//최대공약수 두수를 나눈값이 0이될때까지 돌린다.
// int gcd(int n,int m){
//     if(n==0) return n;
//     gcd(n%m,m); //여기에 return 넣고 안넣고 차이가 있다 return이 하는 역할과
// 재귀함수가 어떻게 돌아가는지 알아보기 
    
// }

int gcd (int n,int m){
    if(m==0 )return n;
    return gcd(m,n%m);
    
}
int lcm (int n,int m,int gcd){
 return n*m/gcd;
    
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int ans = 0;
    if(n>m)  answer.push_back(gcd(n,m));
    else answer.push_back(gcd(m,n));
    answer.push_back(lcm(n,m,answer[0]));
    
    return answer;
}