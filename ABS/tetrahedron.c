#include "tetrahedron.h"

#include <math.h>

void InputTetrahedron(struct tetrahedron *tetrahedron, FILE *inputFile) {
    bool lengthOfLine = InputInt(inputFile, &tetrahedron->lengthOfLine);
    if (!lengthOfLine) {
        printf("Length was incorrect, so it will be one");
    }
}

void RandomTetrahedron(struct tetrahedron *tetrahedron) {
    tetrahedron->lengthOfLine = Random();
}

double VolumeTetrahedron(struct tetrahedron *tetrahedron) {
    return tetrahedron->lengthOfLine * tetrahedron->lengthOfLine * tetrahedron->lengthOfLine * sqrt(2) / 12.0;
}

void OutputTetrahedron(struct tetrahedron *tetrahedron, FILE *outputFile) {
    fprintf(outputFile, "Tetrahedron\n");
    fprintf(outputFile, "length = %d\n", tetrahedron->lengthOfLine);
    fprintf(outputFile, "volume = %f\n", VolumeTetrahedron(tetrahedron));
}