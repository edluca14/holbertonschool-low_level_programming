#!/bin/bash
gcc -c "*.c" -o "*.o" -Wall -Werror -Wextra -pedantic -std=gnu89
ar -rcs liball.a "*.o"
ranlib liball.a
