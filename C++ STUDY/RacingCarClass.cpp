#include <iostream>
#include <cstring>
using namespace std;

namespace Car_CONST
{
	enum{
	ID_LEN=20,
	Max_SPD=200,
	Fuel_Step=2,
	Acc_Step=10,
	BRK_Step=10
	};
	
}

class Car
{
	private:
	char gamerID[Car_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
	
	public:
	void InitMembers(char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMembers(char *ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge=fuel;
	curSpeed=0;
}

void Car::ShowCarState()
{
	cout<<"소유자 ID : "<<gamerID<<endl;
	cout<<"연료량 : "<<fuelGauge<<endl;
	cout<<"현재속도 : "<<curSpeed<<"km/s"<<endl<<endl; 
}
	
void Car::Accel()
{
	if(fuelGauge<=0) return;
	else fuelGauge-=Car_CONST::Fuel_Step;
		
	if(curSpeed+Car_CONST::Acc_Step>=Car_CONST::Max_SPD) {
		curSpeed=Car_CONST::Max_SPD;
		return;
	}
	curSpeed+=Car_CONST::Acc_Step;
}
	
void Car::Break()
{
	if(curSpeed<Car_CONST::BRK_Step)
	{
		curSpeed=0;
		return;
	}
	curSpeed-=Car_CONST::BRK_Step;
}

int main()
{
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();
	
	return 0;
}
