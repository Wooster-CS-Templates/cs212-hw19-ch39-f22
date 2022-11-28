/*
Instructions:

myls: Write a program that lists files in the given directory.
When called without any arguments, the program should just print
the file names. When invoked with the -l flag, the program should
print out information about each file, such as the owner, group, per-
missions, and other information obtained from the stat() system
call. The program should take one additional argument, which is
the directory to read, e.g., myls -l directory. If no directory is
given, the program should just use the current working directory.

Valid Usage:
    * myls directory
    * myls
    * myls -l directory
    * myls -l

Useful interfaces: stat(), opendir(), readdir(), getcwd()

HINTS:
    * REUSE YOUR FUNCTION FOR PRINTING STAT DATA IN MYSTAT
    * You may use a fixed sized array to build the file paths (2048 should be sufficient)
*/

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <time.h>

#define PATHSIZE 2048

int main(int argc, char* argv[]) {
    return 0;
}