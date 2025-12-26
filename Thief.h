#pragma once
#include "Player.h"
#include "Monster.h"

class Thief : public Player
{
public:
	Thief(string nickname);
	void attack(Monster* monster) override;
};