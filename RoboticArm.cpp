#include "RoboticArm.h"

// Constructor: inicializa el brazo en el origen y sin sujetar nada
RoboticArm::RoboticArm() : x(0.0), y(0.0), z(0.0), is_holding(false) {}

// Métodos consultores
double RoboticArm::getX() const { return x; }
double RoboticArm::getY() const { return y; }
double RoboticArm::getZ() const { return z; }
bool RoboticArm::isHolding() const { return is_holding; }

// Acciones
void RoboticArm::grab() { is_holding = true; }
void RoboticArm::release() { is_holding = false; }

void RoboticArm::move(double new_x, double new_y, double new_z) {
    x = new_x;
    y = new_y;
    z = new_z;
}
