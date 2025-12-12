#include "Warrior.h"
#include <iostream>

using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)
{
    job_name = "전사";
    level = 1;
    HP = 30;
    MP = 10;
    power = 25;
    defence = 25;
    accuracy = 10;
    speed = 10;
}

void Warrior::attack(Monster* monster)
{
    monster->setHP(monster->getHP() - (power - monster->getDefence()));
	cout << "대검 휘두르기!" << endl;
	cout << monster->getName() << "에게" << (power - monster->getDefence()) << "의 데미지를 가했습니다." << endl;
}