#include <iostream>
using namespace std;

class FruitSeller
{
    int APPLE_PRICE;
    int numOfApples;
    int myMoney;

public:
    FruitSeller(int price, int num, int money)
        :APPLE_PRICE(price), numOfApples(num), myMoney(money)   // 바로 int 사용
        {
        }

    int SaleApples(int money)
    {
        int num= money/APPLE_PRICE;
        numOfApples -= num;
        myMoney += money;
        return num;         //num 으로 해야 개수 로 돌아간다
    }

    void ShowSaleResult() const
    {
        cout << "사과 갯수 :" << numOfApples << endl;
        cout << "나의 돈 :" << myMoney << endl << endl;
    }
};


class FruitBuyer
{
    int myMoney;
    int numOfApples;
public:
    FruitBuyer(int money)
    {
        myMoney= money;
        numOfApples = 0;
    }

    void BuyApples(FruitSeller &seller, int money)
    {
        numOfApples += seller.SaleApples(money);
        myMoney -= money;
    }

    void ShowBuyResult() const
    {
        cout << "구매자 돈" << myMoney << endl;
        cout << "구매자 사과 갯수" << numOfApples << endl << endl;
    }
};

int main(void)
{
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);

    cout << "판매자 " << endl;
    seller.ShowSaleResult();
    cout << "구매자 " << endl;
    buyer.ShowBuyResult();
}