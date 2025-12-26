#pragma once
#include "Player.h"
#include "Monster.h"

class Warrior : public Player
{
public:
	Warrior(string nickname);
	void attack(Monster* monster) override;
};