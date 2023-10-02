#!/bin/bash
gcc -c *.o
ar rc liball.a *.c
ranlib liball.a
