#!/bin/bash
gcc -Werror -Wall -pedantic -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
