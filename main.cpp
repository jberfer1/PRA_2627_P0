#include <iostream>
#include "RoboticArm.h"

int main() {
    RoboticArm arm;
    
    std::cout << "Posicion inicial: (" << arm.getX() << ", " 
              << arm.getY() << ", " << arm.getZ() << ")\n";
              
    arm.move(12.5, 5.0, 3.2);
    std::cout << "Moviendo brazo a: (" << arm.getX() << ", " 
              << arm.getY() << ", " << arm.getZ() << ")\n";
              
    arm.grab();
    if (arm.isHolding()) {
        std::cout << "El brazo ha recogido el objeto correctamente.\n";
    }
    
    return 0;
}
