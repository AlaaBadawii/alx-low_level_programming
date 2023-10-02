#!/bin/bash
gcc -c -o liball.o *.c && ar rc liball.a liball.o
