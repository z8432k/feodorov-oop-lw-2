#include "Rangechecker.h"

/*
Rangechecker::Rangechecker(double left, double right) {
    this->l = left;
    this->r = right;
}
 */

bool Rangechecker::rangecheck(double num) const {
    return num > this->l && num <= this->r;
}

void Rangechecker::setLeft(double left) {
    this->l = left;
}

void Rangechecker::setRight(double right) {
    this->r = right;
}
