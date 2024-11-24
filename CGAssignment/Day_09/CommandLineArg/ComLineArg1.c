/*
Desp:
1. Write a program to

a. read a name(of max length 40 characters), ip address (as char * string in dotted notation) and port number (unsigned short) of the cloud server as command line arguments.

b. Validate if the required number of arguments have been received before proceeding. Else report error and return.

c. Validate every argument received for valid range of values. [Refer ip address range, port range to do validations]

d. Store the values in a data structure and display using a function passing data structure

void display(struct server *servercfg);

e. Implement a function update() to prompt user, to modify all the server attributes and to display the updated configuration.

// to read, update configuration and return status as SUCCESS/FAILURE

Int update(struct server *servercfg);

f. Specify atleast 6 test cases (positive and negative ) to test command line inputs and update operations

g. Check for memory leaks and fix them.

Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 6th-11-2024
Version: 0.1v

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct server {
    char name[41];
    char ip[16];
    unsigned short port;
};

void display(struct server *servercfg) {
    printf("Server Name: %s\n", servercfg->name);
    printf("IP Address: %s\n", servercfg->ip);
    printf("Port: %hu\n", servercfg->port);
}

int validate_ip(const char *ip) {
    // Add IP validation logic here
    return 1; // Return 1 if valid, 0 if invalid
}

int validate_port(unsigned short port) {
    return port > 0 && port <= 65535;
}

int update(struct server *servercfg) {
    printf("Enter new server name: ");
    scanf("%40s", servercfg->name);
    printf("Enter new IP address: ");
    scanf("%15s", servercfg->ip);
    printf("Enter new port number: ");
    scanf("%hu", &servercfg->port);
    return (validate_ip(servercfg->ip) && validate_port(servercfg->port)) ? 0 : 1;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <name> <ip> <port>\n", argv[0]);
        return 1;
    }

    struct server servercfg;
    strncpy(servercfg.name, argv[1], 40);
    servercfg.name[40] = '\0';
    strncpy(servercfg.ip, argv[2], 15);
    servercfg.ip[15] = '\0';
    servercfg.port = (unsigned short)atoi(argv[3]);

    if (!validate_ip(servercfg.ip) || !validate_port(servercfg.port)) {
        fprintf(stderr, "Invalid IP address or port number.\n");
        return 1;
    }

    display(&servercfg);

    if (update(&servercfg) == 0) {
        printf("Updated configuration:\n");
        display(&servercfg);
    } else {
        fprintf(stderr, "Failed to update server configuration.\n");
    }

    return 0;
}

