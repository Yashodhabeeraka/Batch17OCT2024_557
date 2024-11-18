#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Bhima shankar is a C programme";
	char str2[] = "Bhima shankar is a C programme in c";

	removeChars(str1, str2);
	printf("Output: %s\n", str2);
	
	return 0;
}

void removeChars(char *str1, char *str2) {
    int hash[256] = {0};
    int i = 0;

    // Mark characters present in str1
    while (str1[i]) {
        hash[(int)str1[i]] = 1;
        i++;
    }

    i = 0;
    int j = 0;

    // Remove characters from str2 that are present in str1
    while (str2[i]) {
        if (!hash[(int)str2[i]]) {
            str2[j++] = str2[i];
        }
        i++;
    }
    str2[j] = '\0';
}
