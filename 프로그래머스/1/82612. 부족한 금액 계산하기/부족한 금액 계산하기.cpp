using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long priceLong = static_cast<long long>(price);
    long long moneyLong = static_cast<long long>(money);
    long long tmp =0;
    for(int i=1;i<=count;i++){
        tmp = tmp +  priceLong *i;
        
    }
    if(moneyLong >= tmp){
        return 0;
    }
    else {
        answer = tmp - moneyLong;
    }

    return answer;
}