#ifndef RC_RAY_H
#define RC_RAY_H

#include <raylib.h>
#include <stdint.h>

#define RAY_COLOR_BASE  RAYWHITE

typedef struct Ray_t {
    Vector2 ptoA;
    Vector2 ptoB;
    float   angle;
    float length;
    float pixelPos;
    Color   color;
}Ray_t;

#endif //RC_RAY_H
