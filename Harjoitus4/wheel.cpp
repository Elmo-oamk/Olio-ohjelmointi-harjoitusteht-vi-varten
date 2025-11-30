#include "Wheel.h"

Wheel::Wheel() : size(0), type("") {}
Wheel::Wheel(int sz, string tp) : size(sz), type(tp) {}

int Wheel::getSize() const { return size; }
string Wheel::getType() const { return type; }
void Wheel::setType(string tp) { type = tp; }
