#ifndef __DEBUG_SCREEN_H__
#define __DEBUG_SCREEN_H__

#include "display/screen.hpp"

class DebugScreen : public DisplayScreen {
   public:
    const char* getName() override {
        return "Debug";
    }

    void drawScreen() override {
        // Draw the debug screen
    }
};

#endif // __DEBUG_SCREEN_H__