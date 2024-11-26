#ifndef DEFECT_H
#define DEFECT_H

#include <stdbool.h>

typedef struct {
    char *id;
    char *state;
    char *transition;
} Defect;

bool validate_defect(const char *arg, Defect *defect);
void process_defects(int argc, char *argv[]);
void display_defects();
void free_defects();

#endif // DEFECT_H

