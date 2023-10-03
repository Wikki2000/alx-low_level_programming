#!/bin/bash

gcc -c -Wall -pedantic -Werror -Wextra -std=gnu89 *.c
ar rcs liball.a *.o
