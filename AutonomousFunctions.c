#pragma sysfile


#define kTicksPerFoot  1834;


void stopDriving();
void driveForward(int speed);
void turnLeft(int speed);
void turnRight(int speed);
void driveBackward(int speed);
void driveForwardFeet(int dist);
void turnLeftAngle(int angle);
void turnRightAngle(int angle);
void displayMenu(array menuItems);



void driveForward(int speed) {
    //add motor defs here
}

void turnLeft(int speed) {
    //add motor defs here
}

void turnRight(int speed) {
    //add motor defs here
}

void driveBackward(int speed) {
    //add motor defs here
}

void driveForwardFeet(int dist) {
    resetDriveEncoders();
    
    driveForward(75);
    while( (currentDist * kTicksPerFoot) < (dist * kTicksPerFoot) ) {}
    stopDriving();
}
