#ifndef DEF_ROBOT_HEXAPOD
#define DEF_ROBOT_HEXAPOD

#include <iostream>

class Leg
{
    public:

    private:
        float weight_Coxa;
        float weight_Femur;
        float weight_Tibia;
        static float length_Coxa;
        static float length_Femur;
        static float length_Tibia;
        float angle_Hip_Horizontal;
        float angle_Hip_Vertical;
        float angle_Knee;
        float positionStartLegX; // Relative to the robot position
        float positionStartLegY; // Relative to the robot position
        float positionStartLegZ; // Relative to the robot position
        float positionEndLegX;
        float positionEnfLegY;
        float positionEndLegZ;
};

#endif // DEF_ROBOT_HEXAPOD