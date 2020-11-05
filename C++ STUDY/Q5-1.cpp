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
			cout<<"���"<<endl;
			break;
		case SENIOR:
			cout<<"����"<<endl;
			break;
		case ASSIST:
			cout<<"�븮"<<endl;
			break;
		case MANAGER:
			cout<<"����"<<endl; 
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
		NameCard(char *name, char *comp, char *tel, int position) : pos(position)
		{
			this->name=new char[strlen(name)+1];
			this->comp=new char[strlen(comp)+1];
			this->tel=new char[strlen(tel)+1];
			strcpy(this->name, name);
			strcpy(this->comp, comp);
			strcpy(this->tel, tel);
		} 
		
		NameCard(const NameCard &copy) : pos(copy.pos)
		{
			name=new char[strlen(copy.name)+1];
			comp=new char[strlen(copy.comp)+1];
			tel=new char[strlen(copy.tel)+1];
			strcpy(name, copy.name);
			strcpy(comp, copy.comp);
			strcpy(tel, copy.tel);
		}
		
		void ShowNameCardInfo()
		{
			cout<<"�̸� : "<<name<<endl;
			cout<<"ȸ�� : "<<comp<<endl;
			cout<<"��ȭ��ȣ : "<<tel<<endl;
			cout<<"���� : "; COMP_POS::ShowPositionInfo(pos);
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
	NameCard copy1=manCLERK;
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2=manSENIOR;
	
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	
	return 0;
}
