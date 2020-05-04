#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -g -c -fPIC *.c
gcc -Wall -Werror -Wextra -pedantic -g -shared -o liball.so *.o
