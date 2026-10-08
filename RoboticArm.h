#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm {
private:
    double x, y, z;
    bool is_holding;

public:
    RoboticArm();
    double getX() const;
    double getY() const;
    double getZ() const;
    bool isHolding() const;
    
    void grab();
    void release();
    void move(double new_x, double new_y, double new_z);
};

#endif
