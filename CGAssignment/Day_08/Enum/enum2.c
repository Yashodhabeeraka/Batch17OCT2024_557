/*
Desp: 2. Define a typedef structure to keep the configuration of putty server.
Identify and place all the required members. Create a structure variable
and initialize it with user defined values and finally display the contents
Author: Yashodha_Beeraka_557
Date of creation or Date of modification: 5th-11-2024
Version: 0.1v
*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char host[100];
    int port;
    char protocol[10];
    char username[50];
    char password[50];
    int keepAliveInterval;
    int compression;
} PuttyConfig;

int main()
{
    PuttyConfig config;

    strcpy(config.host, "example.com");
    config.port = 22;
    strcpy(config.protocol, "SSH");
    strcpy(config.username, "user123");
    strcpy(config.password, "password123");
    config.keepAliveInterval = 60;
    config.compression = 1;

    printf("PuTTY Server Configuration:\n");
    printf("Host: %s\n", config.host);
    printf("Port: %d\n", config.port);
    printf("Protocol: %s\n", config.protocol);
    printf("Username: %s\n", config.username);
    printf("Password: %s\n", config.password);
    printf("Keep Alive Interval: %d seconds\n", config.keepAliveInterval);
    printf("Compression: %s\n", config.compression ? "Enabled" : "Disabled");

    return 0;
}
