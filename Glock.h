#pragma once

#include <iostream>

#include"Gun.h"
using namespace std;

class Glock : public Gun {
public:
	Glock();
	~Glock();
	void Shoot() const override;
};