#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
 
class Player {
    string player[2];
    int i;
public:
    Player() {i=0;}
    void setName(string name) { player[i] = name; i++; }
    string getName() {
        i++;
        if(i>=2) {
            i=0;
            return player[i];
        }
        else
            return player[i];
    }
};
 
class GamblingGame {
    int num[3];
public :
    GamblingGame(){srand((unsigned)time(0));}
    void Game1();
    void Game2();
    void Game3();
};

void GamblingGame::Game1() {
    Player p;
	string name;
    cout << "ù��° ���� �̸�>>";
    getline(cin,name);
    p.setName(name);
    cout << "�ι�° ���� �̸�>>";
    getline(cin,name);
    p.setName(name);
 
    string pl;
    
    for(;;) {
        pl = p.getName();
        cout << pl << ":<Enter>";
        getline(cin,name);
        for(int i=0; i<3; i++)
            num[i] = rand() % 3;
        cout << "\t\t" << num[0] << "\t" << num[1] << "\t" << num[2] << "\t";
        if( num[0] == num[1] && num[1] == num[2]) {
            cout << pl << "�� �¸�!!" << endl;
            break;
        }
        else
            cout << "�ƽ�����!" << endl;
    }
}

void GamblingGame::Game2() {
	Player p; string name;
    cout << "ù��° ���� �̸�>>";
    getline(cin,name);
    getline(cin,name);
    p.setName(name);
    cout << "�ι�° ���� �̸�>>";
    getline(cin,name);
    p.setName(name);
 
    string pl;
    
    for(;;) {
        pl = p.getName();
        cout << pl << ":<Enter>";
        getline(cin,name);
        for(int i=0; i<3; i++)
            num[i] = rand() % 4;
        cout << "\t\t" << num[0] << "\t" << num[1] << "\t" << num[2] << "\t";
        if( num[0] == num[1] && num[1] == num[2]) {
            cout << pl << "�� �¸�!!" << endl;
            break;
        }
        else
            cout << "�ƽ�����!" << endl;
    }
}

void GamblingGame::Game3() {
    Player p; string name;
    cout << "ù��° ���� �̸�>>";
    getline(cin,name);
    getline(cin,name);
    p.setName(name);
    cout << "�ι�° ���� �̸�>>";
    getline(cin,name);
    p.setName(name);
 
    string pl;
    
    for(;;) {
        pl = p.getName();
        cout << pl << ":<Enter>";
        getline(cin,name);
        for(int i=0; i<3; i++)
            num[i] = rand() % 5;
        cout << "\t\t" << num[0] << "\t" << num[1] << "\t" << num[2] << "\t";
        if( num[0] == num[1] && num[1] == num[2]) {
            cout << pl << "�� �¸�!!" << endl;
            break;
        }
        else
            cout << "�ƽ�����!" << endl;
    }
}

int main() {
	GamblingGame g;
	int n;
	cout << "***** ���� ������ �����մϴ�. *****" << endl;
	cout<<"���� ������ �Է��ϼ���.(3�� or 4�� or 5��)";
	cin>>n;
	if(n==3) g.Game1();
	else if(n==4) g.Game2();
	else if(n==5) g.Game3();
}

