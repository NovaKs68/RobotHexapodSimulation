#ifndef DEF_ROBOT_HEXAPOD
#define DEF_ROBOT_HEXAPOD

#include "leg.hpp"

class RobotHexapod
{
    public:

    private:
        float weight_Body;
        static float width_Body;
        static float length_Body;
        static float height_Body;
        float x;
        float y;
        float z;
        Leg Leg1;
        Leg Leg2;
        Leg Leg3;
        Leg Leg4;
        Leg Leg5;
        Leg Leg6;
};

#endif // DEF_ROBOT_HEXAPOD