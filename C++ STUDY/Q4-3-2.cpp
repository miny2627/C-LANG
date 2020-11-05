#include <iostream>
#include <cstring>
#define len 50
using namespace std;

namespace COMP_POS
{
	enum{CLERK, SENIOR, ASSIST, MANAGER};
	
	void ShowPositionInfo(int pos)
	{
		switch(pos) {
		case CLERK:
			cout<<"사원"<<endl;
			break;
		case SENIOR:
			cout<<"주임"<<endl;
			break;
		case ASSIST:
			cout<<"대리"<<endl;
			break;
		case MANAGER:
			cout<<"과장"<<endl; 
	}
	}
}

class NameCard
{
	private:
		char *name;
		char *comp;
		char *tel;
		int pos;
	
	public:
		NameCard(char *myname, char *mycomp, char *mytel, int position) : pos(position)
		{
			name=new char[strlen(myname)+1];
			comp=new char[strlen(mycomp)+1];
			tel=new char[strlen(mytel)+1];
			strcpy(name, myname);
			strcpy(comp, mycomp);
			strcpy(tel, mytel);
		} 
		
		void ShowNameCardInfo()
		{
			cout<<"이름 : "<<name<<endl;
			cout<<"회사 : "<<comp<<endl;
			cout<<"전화번호 : "<<tel<<endl;
			cout<<"직급 : "; COMP_POS::ShowPositionInfo(pos);
			cout<<endl;
		}
		
		~NameCard()
		{
			delete []name;
			delete []comp;
			delete []tel;
		}
};

int main()
{
	NameCard manCLERK("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manASSIST("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manCLERK.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manASSIST.ShowNameCardInfo();
	
	return 0;
}
