#pragma once
#include "Strategy.h"
#include "Tower.h"
#include "Grid.h"

class StrategyWeakest : public Strategy{
public:
	void findTarget(Tower* t, CritterManager* cm, Grid* myGrid, int updatedRange);
	virtual string getName() const;
};