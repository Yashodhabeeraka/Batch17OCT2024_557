#include "defect.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_DEFECTS 100

static Defect defects[MAX_DEFECTS];
static int defect_count = 0;

bool validate_defect(const char *arg, Defect *defect) {
    if (arg[0] != 'D') {
        printf("Parse error in %s\n", arg);
        return false;
    }

    char *colon = strchr(arg, ':');
    if (!colon) {
        printf("Parse error in %s\n", arg);
        return false;
    }

    defect->id = strndup(arg, colon - arg);
    defect->state = strdup(colon + 1);
    defect->transition = NULL;

    return true;
}

void process_defects(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        Defect defect;
        if (validate_defect(argv[i], &defect)) {
            defects[defect_count++] = defect;
        }
    }
}

void display_defects() {
    printf("-------------------\n");
    for (int i = 0; i < defect_count; ++i) {
        printf("Defect:%s, State:%s\n", defects[i].id, defects[i].state);
    }
}

void free_defects() {
    for (int i = 0; i < defect_count; ++i) {
        free(defects[i].id);
        free(defects[i].state);
        free(defects[i].transition);
    }
}

