#include "Thief.h"
#include <iostream>

using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
    job_name = "도적";
    level = 1;
    HP = 25;
    MP = 25;
    power = 25;
    defence = 10;
    accuracy = 30;
    speed = 50;
}

void Thief::attack(Monster* monster)
{
    monster->setHP(monster->getHP() - (power - monster->getDefence()) / 5);
    monster->setHP(monster->getHP() - (power - monster->getDefence()) / 5);
    monster->setHP(monster->getHP() - (power - monster->getDefence()) / 5);
    monster->setHP(monster->getHP() - (power - monster->getDefence()) / 5);
    monster->setHP(monster->getHP() - (power - monster->getDefence()) / 5);

	cout << "연속 찌르기!" << endl;

    cout << monster->getName() << "에게" << (power - monster->getDefence()) / 5 << "의 데미지를 가했습니다." << endl;
    cout << monster->getName() << "에게" << (power - monster->getDefence()) / 5 << "의 데미지를 가했습니다." << endl;
    cout << monster->getName() << "에게" << (power - monster->getDefence()) / 5 << "의 데미지를 가했습니다." << endl;
    cout << monster->getName() << "에게" << (power - monster->getDefence()) / 5 << "의 데미지를 가했습니다." << endl;
    cout << monster->getName() << "에게" << (power - monster->getDefence()) / 5 << "의 데미지를 가했습니다." << endl;
}