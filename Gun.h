#pragma once

#include <iostream>
using namespace std;

class Gun {

public:

	Gun();
	virtual ~Gun();

	virtual void Shoot() const;
};