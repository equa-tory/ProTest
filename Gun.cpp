#include "Gun.h"

Gun::Gun() {
	cout << "[LOG] Gun created!\n";
}
Gun::~Gun(){
	cout << "[LOG] Gun destroyed!\n";
}

void Gun::Shoot() const{
	cout << "Gun:Bang!\n";
}