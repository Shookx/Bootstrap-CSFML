#pragma once

#include <SFML/Graphics.h>
#include <SFML/System.h>

typedef struct time_s {
    sfClock *_clock;
    float deltaTime;
} deltatime_t;
