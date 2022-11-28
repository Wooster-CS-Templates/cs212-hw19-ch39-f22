/*
Instructions:

mystat: Write your own version of the command line program stat,
which simply calls the stat() system call on a given file or di-
rectory. 

NEATLY display out:
* inode number
* file type (in plain text USE THE DOCS FOR stat)
* link count
* ownership
* file size in bytes
* number of blocks allocated
* last file access time
* last file modification time

Usage: mystat [file/directory path]

Useful interfaces: stat()

HINTS:
    * USE THE DOCUMENTATION FOR STAT
    * A conditional structure will help with displaying the file type
    * ctime() will help you print the time our properly
*/
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char* argv[]) {
    return 0;
}