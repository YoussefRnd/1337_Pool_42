#!/bin/bash

find . -name "*.c" -type f -exec gcc -Wall -Wextra -Werror -c {} \;
find . -name "*.o" -type f -exec ar rcs libft.a {} \;
ranlib libft.a
rm *.o
