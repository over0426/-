#include <math.h>
#include "VECTOR2.h"
VECTOR2::VECTOR2(float x, float y) {
    this->x = x;	this->y = y;
}
void VECTOR2::set(float x, float y) {
    this->x = x;    this->y = y;
}
VECTOR2 VECTOR2::operator+(const VECTOR2& v) const {
    return VECTOR2(x + v.x, y + v.y);
}
VECTOR2 VECTOR2::operator-(const VECTOR2& v) const {
    return VECTOR2(x - v.x, y - v.y);
}
VECTOR2 VECTOR2::operator*(float f) const {
    return VECTOR2(x * f, y * f);
}
VECTOR2 VECTOR2::operator/(float f) const {
    return VECTOR2(x / f, y / f);
}
VECTOR2 VECTOR2::operator-() const {
    return VECTOR2(-x, -y);
}
void VECTOR2::operator+=(const VECTOR2& v) {
    x += v.x;
    y += v.y;
}
void VECTOR2::operator-=(const VECTOR2& v) {
    x -= v.x;
    y -= v.y;
}