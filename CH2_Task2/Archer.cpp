#include "Archer.h"
#include <iostream>

using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "궁수";
	level = 1;
    HP = 20;
    MP = 10;
    power = 20;
    defence = 15;
    accuracy = 50;
    speed = 30;
}

void Archer::attack(Monster* monster)
{
    monster->setHP(monster->getHP() - (power - monster->getDefence())/3);
    monster->setHP(monster->getHP() - (power - monster->getDefence())/3);
    monster->setHP(monster->getHP() - (power - monster->getDefence())/3);

	cout << "연속화살 발사!" << endl;
    cout << monster->getName() << "에게" << (power - monster->getDefence())/3 << "의 데미지를 가했습니다." << endl;
    cout << monster->getName() << "에게" << (power - monster->getDefence()) / 3 << "의 데미지를 가했습니다." << endl;
    cout << monster->getName() << "에게" << (power - monster->getDefence()) / 3 << "의 데미지를 가했습니다." << endl;
}