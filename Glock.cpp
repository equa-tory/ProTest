#include "Glock.h"

Glock::Glock() { cout << "[LOG] Glock created\n"; }
Glock::~Glock() { cout << "[LOG] Glock deleted\n"; }

void Glock::Shoot() const {
	Gun::Shoot();
	cout << "Glock: Bang!\n";
}