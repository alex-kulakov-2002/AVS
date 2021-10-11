#include "parallelepiped.h"

void InputParallelepiped (struct parallelepiped *parallelepiped, FILE *inputFile) {
    bool depth = InputInt(inputFile, &parallelepiped->depth);
    bool length = InputInt(inputFile, &parallelepiped->length);
    bool width = InputInt(inputFile, &parallelepiped->width);
    if (!depth || !length || !width){
        printf("There were some incorrect values, them become ones");
    }
}

void RandomParallelepiped(struct parallelepiped *parallelepiped) {
    printf("%d", (int)sizeof (parallelepiped));
    parallelepiped->width=Random();
    parallelepiped->length = Random();
    parallelepiped->depth=Random();
}

double VolumeParallelepiped(struct parallelepiped *parallelepiped) {
    return parallelepiped->depth * parallelepiped->length * parallelepiped->width;
}

void OutputParallelepiped(struct parallelepiped *parallelepiped, FILE *outputFile) {
    fprintf (outputFile, "Parallelepiped:\n");
    fprintf (outputFile, "length = %d\n", parallelepiped->length);
    fprintf(outputFile, "width = %d\n", parallelepiped->width);
    fprintf (outputFile, "depth = %d\n", parallelepiped->depth);
    fprintf (outputFile, "Volume = %f\n", VolumeParallelepiped(parallelepiped));
}
