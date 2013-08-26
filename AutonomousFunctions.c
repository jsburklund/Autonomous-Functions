#pragma systemFile


#define kTicksPerFoot  1834                 //TODO
#define leftEncoder nMotorEncoder[add name] //TODO
#define rightEncoder nMotorEncoder[add name]//TODO
#define gyroValue SensorValue[add name]     //TODO
#define kGyroTicksPerDegree add#            //TODO

float gyroHeading = 0;

//------- function definitions -------
void stopDriving();
void turnLeft(int speed);
void turnLeftAngle(int speed, int angle);
void turnLeftHeading(int speed, int angle)
void turnRight(int speed);
void turnRightAngle(int speed, int angle);
void turnRightHeading(int speed, int angle);
void driveBackward(int speed);
void driveForward(int speed);
void driveForwardFeet(int dist);
void displayMenu(array menuItems);

void resetGyro();
void calibrateGyro();
void initializeGyro();

task updateGyroHeading();

//------- function declarations -------
void stopDriving() { //TODO
    //add motor defs here  
}

void turnLeft(int speed) { //TODO
    //add motor defs here  
}

void turnLeftAngle(int speed, float angle) { //TOTEST
    //set current heading as 0 point
    angle = angle * kGyroTicksPerDegree;
    float startHeading = gyroHeading;
    
    turnLeft(speed);
    while ((gyroHeading - startHeading) < angle) {}         //turn until the desired angle is overshot
    stopDriving();
    
    turnRight(speed/4);
    while ((gyroHeading - startHeading) > angle) {}         //turn back at 1/4th the speed for a more accurate heading
    stopDriving();
}

void turnRight(int speed) { //TODO
    //add motor defs here
}

void turnRightAngle(int speed, float angle) { //TODO
    //set current heading as 0 point
    angle = angle * kGyroTicksPerDegree;
    float startHeading = gyroHeading;
    
    turnRight(speed);
    while ((gyroHeading - startHeading) < angle) {}         //turn until the desired angle is overshot
    stopDriving();
    
    turnLeft(speed/4);
    while ((gyroHeading - startHeading) > angle) {}         //turn back at 1/4th the speed for a more accurate heading
    stopDriving();
}

void driveForward(int speed) {
    //add motor defs here
}

void driveForwardFeet(int speed, int dist) { //TOTEST
    resetDriveEncoders();
    
    driveForward(speed);
    while( (currentDist * kTicksPerFoot) < (dist * kTicksPerFoot) ) {}
    stopDriving();
}



task gyroHeading() { //TODO
    //continuously integrate the output value of the gyro to obtain the current heading
}
