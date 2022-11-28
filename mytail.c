/*
Instructions:

mytail: Write a program that prints out the last few LINES of a file. The
program should be efficient, in that it seeks to near the end of the
file, reads in a block of data, and then goes backwards until it finds
the requested number of lines; at this point, it should print out those
lines from beginning to the end of the file. To invoke the program,
one should type: mytail n file, where n is the number of lines
at the end of the file to print.

Valid Usage: mytail [number of lines from the end] [input file to read]

Useful interfaces: stat(), lseek(), open(), read(), close()

HINTS:
    * Read the file backwards looking for '\n' characters
    * Once you have found enough '\n' characters, you have n lines to print
    * STAT CAN TELL YOU HOW BIG THE FILE IS, YOU DO NOT NEED TO MALLOC

*/
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
    return 0;
}