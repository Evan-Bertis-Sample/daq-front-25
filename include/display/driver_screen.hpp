#ifndef __DRIVER_SCREEN_H__
#define __DRIVER_SCREEN_H__

#include "display/screen.hpp"

class DriverScreen : public DisplayScreen {
   public:
    const char* getName() override {
        return "Driver";
    }

    void drawScreen() override {
        // Draw the driver screen
    }
};

#endif  // __DRIVER_SCREEN_H__