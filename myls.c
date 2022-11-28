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

Output should be:
[inode number] [filename or directory name] [file type] [file mode] [number of links] [user] [group] [size in bytes] [modified time]

File type will be displayed as:
* f for regular file
* d for directory
* l for symlink
* - for anything else

This will be per file/directory being listed as shown:

10 foo.txt f 600 2 prof gpeople 1024 Wed Feb 13 16:06:10 2013
9 mydir d 777 1 prof root 512 Mon Nov 28 12:00:10 2022
...

HINTS:
    * USE THE DOCUMENTATION FOR STAT
    * A conditional structure will help with displaying the file type
    * ctime() will help you print the time our properly
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