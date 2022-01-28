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

char * MyString_strrchr (char const string[], int character) {
    char * p = NULL;
    char * s = (char *) string;

    if (character == '\0') {
        return s + MyString_strlen(s);
    }

    while (*s != '\0') {
        if (*s == character) {
            p = s;
        }
        s++;
    }

    return p;
}

char * MyString_strpbrk (char const string[], char const accept[]) {
    char * s = (char *) string;
    char * p = NULL;

    while (*s != '\0') {
        char *c = MyString_strchr(accept, *s);
        if(c != NULL) {
            return s;
        }
        s++;
    }
    return p;
}