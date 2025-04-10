#include <TaskManager.h>
#include "Blink.h"

void setup () {
    // 10 ms - 0.01 s - 100 fps
    Tasks.add<Blink>()->withPin(3)->startFps(100.0 * 2);
    // 1 ms - 0.001 s - 1000 fps
    Tasks.add<Blink>()->withPin(5)->startFps(1000.0 * 2);
    // 500 ns - 0.0005 s - 2000 fps
    Tasks.add<Blink>()->withPin(6)->startFps(2000.0 * 2);
    // 100 ns - 0.0001 s - 10000 fps
    Tasks.add<Blink>()->withPin(9)->startFps(10000.0 * 2);
    // 50 ns - 0.00005s - 20000 fps
    Tasks.add<Blink>()->withPin(10)->startFps(20000.0 * 2);
}

void loop () {
    Tasks.update();
}
