#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab1.h"
/*
 * readString - reads a line from a file given by
 * fileName and returns it as a c-string.  The line
 * return is removed from the string.
 * 
 * fileName is c-string representing the file to read.
 * 
 */
char* readString(char* fileName){
    //TODO: Replace this line with your code
}

/*
 * mysteryExplode - takes a string of characters and explodes it
 * as follows:
 * 
 * A non-empty string such as "Code" is turned into "CCoCodCode".
 *
 *   Return a new string similar to the string given above.
 *
 *  Example:
 *   mysteryExplosion("Code") --> "CCoCodCode"
 *   mysteryExplosion("abc") --> "aababc"
 *   mysteryExplosion(":)") --> "::)"
 * 
 */
char* mysteryExplode(const char* str){
    if (str == NULL) {
        return NULL;
    }

    int length = strlen(str);
    int new_len = length * (length + 1) / 2;
    char* res = (char*)malloc((new_len + 1) * sizeof(char));
    if (res == NULL) {
        return NULL;
    }

    int index = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            res[index++] = str[j];
        }
    }

    res[new_len] = '\0';
    return res;
}