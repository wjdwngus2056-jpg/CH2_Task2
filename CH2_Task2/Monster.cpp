#include "Monster.h"
#include <iostream>

using namespace std;

Monster::Monster(string name)
{
    this->name = name;
    HP = 10; // 몬스터의 HP
    power = 30; // 몬스터의 공격력
    defence = 10; // 몬스터의 방어력
    speed = 10; // 몬스터의 스피드
}

void Monster::attack(Player* player)
{
    player->setHP(player->getHP() - (power - player->getDefence()));
    cout << name << "이(가) " << player->getNickname() << "을(를) 물어뜯습니다!" << endl;
    cout << player->getNickname() << "이(가)" << (power - player->getDefence()) << "의 데미지를 입었습니다." << endl;
}

void Monster::printMonsterStatus()
{
    cout << "------------------------------------" << endl;
    cout << "* 이름: " << name << endl;
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "HP: " << HP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

string Monster::getName()
{
    return name;
}
int Monster::getHP()
{
    return HP;
}
int Monster::getPower()
{
    return power;
}
int Monster::getDefence()
{
    return defence;
}
int Monster::getSpeed()
{
    return speed;
}

void Monster::setName(string name)
{
    this->name = name;
}
void Monster::setHP(int HP)
{
    this->HP = HP;
}
void Monster::setPower(int power)
{
    this->power = power;
}
void Monster::setDefence(int defence)
{
    this->defence = defence;
}
void Monster::setSpeed(int speed)
{
    this->speed = speed;
}