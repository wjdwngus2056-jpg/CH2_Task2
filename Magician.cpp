#include "Magician.h"
#include <iostream>

using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "마법사";
    level = 1;
    HP = 15;
    MP = 60;
    power = 40;
    defence = 10;
    accuracy = 30;
    speed = 30;
}

void Magician::attack(Monster* monster)
{
    double HitDamage_Magician = (power - monster->getDefence());

    if (HitDamage_Magician <= 0)
    {
        HitDamage_Magician = 1;
    }

    monster->setHP(monster->getHP() - HitDamage_Magician);
	cout << "화염구 발사!" << endl;
	cout << monster->getName() << "에게" << HitDamage_Magician << "의 데미지를 가했습니다." << endl;
}