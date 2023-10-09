#include "main.h"

char *rot13(char *s) {
    char *p = s;

    while (*s) {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
            if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M')) {
                *s += 13;
            } else {
                *s -= 13;
            }
        }
        s++;
    }

    return p;
}

