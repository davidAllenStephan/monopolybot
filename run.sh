#!/bin/bash
cmake -S . -B build && cd build && cmake --build . && ./Monopoly ../src/properties.csv
