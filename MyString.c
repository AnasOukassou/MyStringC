#include "MyString.h"

size_t MyString_strlen (char const string[]) {

    char const *c = string;
    while(*c != '\0'){
        c++;
    }

    return (c - string);
}

char * MyString_strchr (char const string[], int character) {
    char * p = NULL;

    while (*string != '\0' && *string != character) {
        string++;
    }

    if (*string == character) {
        p = (char *)string;
    }

    return p;
}
