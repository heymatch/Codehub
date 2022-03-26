#!/bin/bash

g++ -static -O2 -std=c++11 -o $1.out $1.cpp
./$1.out < $1.in