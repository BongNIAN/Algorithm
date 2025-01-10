#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    // a ->열 ,b ->행
    //  행을 바깥, 열을 안
    //근데이거 2중포문 안쓰고 그냥 push로 하나의 줄을 만들고 
    // 포문 2개쓰면 해결될 문제 아닌가? n^2 ->2n으로?
    // 벡터출력할때 내부적으로 for문이 돌아가나? ->이거한번 알아보자 
    // 벡터출력할때 내부적으로 for문이 돌아가고 , 시간복잡도는 n
    // 그냥 직접찍자 
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout << "*";
        }
        cout<<'\n';
        
    }
   
    return 0;
}