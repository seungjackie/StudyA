#include <iostream>
using namespace std;

class FruitSeller
{
private:
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    void InitMembers(int price, int num, int money)
    {
        // 초기값 설정
        APPLE_PRICE = price;
        numOfApples = num;
        myMoney = money;
    }

    int SaleApples(int money)
    {
        // 예 내돈 4만원 , 사과가 1개에 만원
        int num = money/APPLE_PRICE;
        // 사과를 산만큼 총계수에서 빼주기
        numOfApples -=num;
        // 내 돈애 더 생긴다
        myMoney += money;
        return num;
    }
    void ShowSaleResult()
    {
        cout << "사과 개수" << numOfApples << endl;
        cout << "나의 돈 " << myMoney << endl << endl;
    }
};

class FruitBuyer
{
    int myMoney;    // private:
    int numOfApples; // private:

public:
    void InitMembers(int money)
    {
        myMoney = money;
        numOfApples = 0;
    }

    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }
    void ShowBuyResult()
    {
        cout << "돈 " << myMoney <<endl;
        cout << "내가 가진 사과 갯수 " << numOfApples << endl << endl;
    }
};

int main()
{
    FruitSeller seller;
    // 1000원 , 20개
    seller.InitMembers(1000, 20, 0);
    FruitBuyer buyer;
    // 가진돈 5000 원 ,
    buyer.InitMembers(5000);
    // 사과 두개 팔겠다 
    buyer.BuyApples(seller, 2000);

    cout << "예제 " << endl;
    seller.ShowSaleResult();
    cout << "밥밥" << endl;
    buyer.ShowBuyResult();
    return 0;
}