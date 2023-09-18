#!/bin/bash

# Change to the directory containing your source file s
cd alx-low_level_programming/0x05-pointers_arrays_strings
# Loop through all .c files and convert line endings
for file in *.c; do
	    dos2unix "$file"
    done

