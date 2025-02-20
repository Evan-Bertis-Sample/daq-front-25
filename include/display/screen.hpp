#ifndef __SCREEN_H__
#define __SCREEN_H__

#include <memory>
#include <vector>

/// @brief A simple class for wrapping different screen types, like driver, debug, etc.
class DisplayScreen {
   public:
    virtual const char* getName() = 0;
    virtual void drawScreen() = 0;
};

class ScreenCollection {
   public:
    void addScreen(std::shared_ptr<DisplayScreen> screen) {
        _screens.push_back(screen);
    }

    void draw() {
        _screens[_currentScreenIndex]->drawScreen();
    }

    void nextScreen() {
        _currentScreenIndex = (_currentScreenIndex + 1) % _screens.size();
    }

    void previousScreen() {
        _currentScreenIndex = (_currentScreenIndex - 1) % _screens.size();
    }

   private:
    std::vector<std::shared_ptr<DisplayScreen>> _screens;
    std::size_t _currentScreenIndex = 0;
};

#endif  // __SCREEN_H__