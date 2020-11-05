#include <iostream>
using namespace std;

class FruitSeller
{
	int Apple_price;
	int num_apple;
	int mymoney;
	
	public:
		void InitMembers(int price, int num, int money)
		{
			Apple_price=price;
			num_apple=num;
			mymoney=money;
		}
		
		int SaleApples(int money)
		{
			int num=money/Apple_price;
			num_apple-=num;
			mymoney+=money;
			return num;
		}
		
		void ShowSalesResult()
		{
			cout<<"남은 사과 : "<<num_apple<<endl;
			cout<<"판매 수익 : "<<mymoney<<endl<<endl; 
		}
};

class FruitBuyer
{
	int mymoney;
	int num_apple;
	
	public:
		void InitMembers(int money)
		{
			mymoney=money;
			num_apple=0;
		}
		
		void BuyApples(FruitSeller &seller, int money)
		{
			num_apple+=seller.SaleApples(money);
			mymoney-=money;
		}
		
		void ShowBuyResult()
		{
			cout<<"현재 잔액 : "<<mymoney<<endl;
			cout<<"사과 개수 : "<<num_apple<<endl<<endl; 
		}
};

int main()
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);
	
	cout<<"과일 판매자의 현황"<<endl;
	seller.ShowSalesResult();
	cout<<"과일 구매자의 현황"<<endl;
	buyer.ShowBuyResult();
	return 0;
}
