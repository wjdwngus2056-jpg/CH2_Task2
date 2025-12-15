#pragma once
#include "Player.h"
#include "Monster.h"

class Archer : public Player
{
public:
	Archer(string nickname);
	void attack(Monster* monster) override;
};