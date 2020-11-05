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
			cout<<"���� ��� : "<<num_apple<<endl;
			cout<<"�Ǹ� ���� : "<<mymoney<<endl<<endl; 
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
			cout<<"���� �ܾ� : "<<mymoney<<endl;
			cout<<"��� ���� : "<<num_apple<<endl<<endl; 
		}
};

int main()
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);
	
	cout<<"���� �Ǹ����� ��Ȳ"<<endl;
	seller.ShowSalesResult();
	cout<<"���� �������� ��Ȳ"<<endl;
	buyer.ShowBuyResult();
	return 0;
}
