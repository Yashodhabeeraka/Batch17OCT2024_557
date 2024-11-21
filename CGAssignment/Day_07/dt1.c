/*
Desc:To read the following information at the
run time display,choose approprite datatype
*/
#include <stdio.h>

int main() {
    char username[126];
    int age;
    float salary;
    short desg_code;
    char gender;

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter designation code: ");
    scanf("%hd", &desg_code);

    printf("Enter gender: ");
    scanf(" %c", &gender);

    printf("\nUser Information:\n");
    printf("Username: %s", username);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
        printf("Designation Code: %hd\n", desg_code);
    printf("Gender: %c\n", gender);

    return 0;
}
