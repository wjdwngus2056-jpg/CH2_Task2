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
    monster->setHP(monster->getHP() - (power - monster->getDefence()));
	cout << "화염구 발사!" << endl;
	cout << monster->getName() << "에게" << (power - monster->getDefence()) << "의 데미지를 가했습니다." << endl;
}