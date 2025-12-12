#include <iostream>
#include <Windows.h>
#include "Player.h"
#include "Warrior.h"
#include "Archer.h"
#include "Magician.h"
#include "Thief.h"
#include "Monster.h"

// 전투를 진행하는 함수를 생성함.
void Battle(Player* player, Monster* monster)
{
    while (monster->getHP() >= 0 && player->getHP() >= 0)
    {
        int BattleChoice = 0;

        player->printPlayerStatus();
        monster->printMonsterStatus();

        cout << "전투 선택" << endl;
        cout << "1. 전투" << endl;
        cout << "2. 포기" << endl;
        cout << "선택: ";
        cin >> BattleChoice;

        if (BattleChoice == 1 || BattleChoice == 2)
        {
            switch (BattleChoice)
            {
            case 1:
                system("cls");
                player->attack(monster); // 플레이어의 공격
                monster->attack(player); // 몬스터의 공격
                break;
            case 2:
                system("cls");
                player->setHP(0);
                break;
            }

        }
        else
        {
            cout << "잘못된 선택입니다. 다시 선택해주세요." << endl;
            Sleep(1000);
            system("cls");
            BattleChoice = 0;
            continue;
        }
    }

    player->printPlayerStatus();
    monster->printMonsterStatus();

    cout << endl << "전투가 종료되었습니다!" << endl;
    if (player->getHP() <= 0 && monster->getHP() <= 0)
    {
        if (player->getHP() < monster->getHP())
        {
            cout << player->getNickname() << "님이 쓰러졌습니다." << endl;
        }
        else if (player->getHP() > monster->getHP())
        {
            cout << monster->getName() << "이(가) 숨을 거뒀습니다." << endl;
        }
        else
        {
            cout << "무승부" << endl;
        }
    }
    else if (player->getHP() <= 0)
    {
        cout << player->getNickname() << "님이 쓰러졌습니다." << endl;
    }
    else if (monster->getHP() <= 0)
    {
        cout << monster->getName() << "이(가) 숨을 거뒀습니다." << endl;
    }
}

int main() 
{
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;
    Monster* monster = new Monster("늑대");

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;
    system("cls");

    cout << "<전직 시스템>" << endl;
    cout << "------------------------------------" << endl;
    cout << "* " << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;
    cout << "------------------------------------" << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << endl << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    system("cls");
    
    Battle(player, monster);

    if (player != nullptr)
        delete player;
    if (monster != nullptr)
        delete monster;

    return 0;
}