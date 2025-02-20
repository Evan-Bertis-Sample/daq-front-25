#ifndef __CAN_SCREEN_H__
#define __CAN_SCREEN_H__

#include "display/screen.hpp"

class CanScreen : public DisplayScreen {
   public:
    const char* getName() override {
        return "CAN";
    }

    void drawScreen() override {
        // Draw the CAN screen
    }
};

#endif // __CAN_SCREEN_H__