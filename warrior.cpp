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
    double HitDamage_Warrior = (power - monster->getDefence());

    if (HitDamage_Warrior <= 0)
    {
        HitDamage_Warrior = 1;
    }

    monster->setHP(monster->getHP() - HitDamage_Warrior);
	cout << "대검 휘두르기!" << endl;
	cout << monster->getName() << "에게" << HitDamage_Warrior << "의 데미지를 가했습니다." << endl;
}