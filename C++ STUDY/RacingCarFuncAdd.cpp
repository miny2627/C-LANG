#include <iostream>
using namespace std;

#define ID_LEN 20
#define Max_SPD 200
#define Fuel_Step 2
#define Acc_Step 10
#define BRK_Step 10

struct Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
	
	void ShowCarState()
	{
		cout<<"소유자 ID : "<<gamerID<<endl;
		cout<<"연료량 : "<<fuelGauge<<endl;
		cout<<"현재속도 : "<<curSpeed<<"km/s"<<endl<<endl; 
	}
	
	void Accel()
	{
		if(fuelGauge<=0) return;
		else fuelGauge-=Fuel_Step;
		
		if(curSpeed+Acc_Step>=Max_SPD) {
			curSpeed=Max_SPD;
			return;
		}
		curSpeed+=Acc_Step;
	}
	
	void Break()
	{
		if(curSpeed<BRK_Step)
		{
			curSpeed=0;
			return;
		}
		curSpeed-=BRK_Step;
	}
};

int main()
{
	Car run99={"run99", 100, 0};
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	
	Car sped77={"Sped77", 100, 0};
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	
	return 0;
}
