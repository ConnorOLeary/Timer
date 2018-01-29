//
//  Controller.hpp
//  Timer
//
//  Created by Oleary, CONNOR on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <time.h>
#include <assert.h>
#include <iostream>

#endif /* Controller_hpp */

class Timer
{
private:
    clock_t executionTime;
protected:
    
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
    
};
