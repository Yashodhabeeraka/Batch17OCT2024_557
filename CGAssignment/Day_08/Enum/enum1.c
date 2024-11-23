/*
Desp:1. WAP to define an enum to store designations in an organization. List of possible values are
{E2F=1, E2, E3, E4, E5}
Prompt and read a designation from the user. Then display his designation string such as
Designation                     Designation String
E2F                             Software Fresher
E2                              Software Engineer
E3                              Senior Software Engineer
E4                              Team Lead
E5                              Senior Team Lead
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 5th-11-2024
Version: 0.1v
*/

#include <stdio.h>

typedef enum
{
    E2F = 1,
    E2,
    E3,
    E4,
    E5
} Designation;

int main()
{
    int input;
    Designation designation;

    printf("Enter your designation (1 for E2F, 2 for E2, 3 for E3, 4 for E4, 5 for E5): ");
    scanf("%d", &input);

    designation = (Designation)input;

    printf("Designation\t\tDesignation String\n");
    switch (designation) {
        case E2F:
            printf("E2F\t\t\tSoftware Fresher\n");
            break;
        case E2:
            printf("E2\t\t\tSoftware Engineer\n");
            break;
        case E3:
            printf("E3\t\t\tSenior Software Engineer\n");
            break;
        case E4:
            printf("E4\t\t\tTeam Lead\n");
            break;
        case E5:
            printf("E5\t\t\tSenior Team Lead\n");
            break;
        default:
            printf("Invalid designation entered.\n");
            break;
    }

    return 0;
}
