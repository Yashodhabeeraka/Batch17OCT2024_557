/* 
Desp:  Write below functions to extract and return the required inputs 
from an email id string of max length 80 characters. 
Program should be able to detect an invalid email id too based on following validations. 
Also value returned should be in scope and accessible in caller.
a. valid email id will have username, host and domain name (as .com/.edu)
Functions:
char *getuser(char input[]); // return NULL or valid username from email id input
char *gethost(char input[]); //return NULL or valid hostname from email id input
char *getdomain(char input[]); //return NULL or valid domain name from email id input
int isValidDomain(char input[]); // return 1 if domain is “.com” or “.edu” else 0

Author: Yashodha_Beeraka_557
Date of creation or Date of modification:
Version: 0.1v
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *getuser(char input[]);
char *gethost(char input[]);
char *getdomain(char input[]);
int isValidDomain(char input[]);

int main() 
{
    char email[81];
    printf("Enter an email ID (max 80 characters): ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0'; 

    char *user = getuser(email);
    char *host = gethost(email);
    char *domain = getdomain(email);

    if (user && host && domain && isValidDomain(domain)) 
	{
        printf("Username: %s\n", user);
        printf("Hostname: %s\n", host);
        printf("Domain: %s\n", domain);
    } 
	else 
	{
        printf("Invalid email ID.\n");
    }

    free(user);
    free(host);
    free(domain);

    return 0;
}

char *getuser(char input[]) 
{
    char *at = strchr(input, '@');
    if (at == NULL) return NULL;

    size_t len = at - input;
    char *user = (char *)malloc(len + 1);
    if (user == NULL) return NULL;

    strncpy(user, input, len);
    user[len] = '\0';
    return user;
}

char *gethost(char input[]) 
{
    char *at = strchr(input, '@');
    if (at == NULL) return NULL;

    char *dot = strchr(at, '.');
    if (dot == NULL) return NULL;

    size_t len = dot - at - 1;
    char *host = (char *)malloc(len + 1);
    if (host == NULL) return NULL;

    strncpy(host, at + 1, len);
    host[len] = '\0';
    return host;
}

char *getdomain(char input[]) 
{
    char *dot = strrchr(input, '.');
    if (dot == NULL) return NULL;

    char *domain = strdup(dot);
    return domain;
}

int isValidDomain(char input[]) 
{
    return (strcmp(input, ".com") == 0 || strcmp(input, ".edu") == 0);
}

