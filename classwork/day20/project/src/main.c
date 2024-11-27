#include "defect.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <defect details>\n", argv[0]);
        return EXIT_FAILURE;
    }

    process_defects(argc, argv);
    display_defects();
    free_defects();

    return EXIT_SUCCESS;
}

