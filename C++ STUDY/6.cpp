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
    cout << "첫번째 선수 이름>>";
    getline(cin,name);
    p.setName(name);
    cout << "두번째 선수 이름>>";
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
            cout << pl << "님 승리!!" << endl;
            break;
        }
        else
            cout << "아쉽군요!" << endl;
    }
}

void GamblingGame::Game2() {
	Player p; string name;
    cout << "첫번째 선수 이름>>";
    getline(cin,name);
    getline(cin,name);
    p.setName(name);
    cout << "두번째 선수 이름>>";
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
            cout << pl << "님 승리!!" << endl;
            break;
        }
        else
            cout << "아쉽군요!" << endl;
    }
}

void GamblingGame::Game3() {
    Player p; string name;
    cout << "첫번째 선수 이름>>";
    getline(cin,name);
    getline(cin,name);
    p.setName(name);
    cout << "두번째 선수 이름>>";
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
            cout << pl << "님 승리!!" << endl;
            break;
        }
        else
            cout << "아쉽군요!" << endl;
    }
}

int main() {
	GamblingGame g;
	int n;
	cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
	cout<<"숫자 범위를 입력하세요.(3개 or 4개 or 5개)";
	cin>>n;
	if(n==3) g.Game1();
	else if(n==4) g.Game2();
	else if(n==5) g.Game3();
}

