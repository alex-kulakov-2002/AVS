#ifndef __parallelepiped__
#define __parallelepiped__

#include <stdio.h>
#include "processingExceptions.h"
#include "random.h"
#include <stdbool.h>

struct parallelepiped {
    int length;
    int width;
    int depth;
};

void InputParallelepiped(struct parallelepiped *parallelepiped, FILE* inputFile);

void OutputParallelepiped(struct parallelepiped *parallelepiped, FILE* outputFile);

void RandomParallelepiped(struct parallelepiped *parallelepiped);

double VolumeParallelepiped(struct parallelepiped *parallelepiped);

#endif
