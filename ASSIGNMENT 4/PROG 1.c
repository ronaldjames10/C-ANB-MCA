// 1. Write a C program to list all files and sub-directories in a directory.
#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

void list_files(char *dir_name) {
    DIR *dir;
    struct dirent *entry;
    struct stat st;

    if ((dir = opendir(dir_name)) == NULL) {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue; // Skip current and parent directories
        }

        char path[1024];
        snprintf(path, sizeof(path), "%s/%s", dir_name, entry->d_name);

        if (stat(path, &st) == 0) {
            if (S_ISDIR(st.st_mode)) {
                printf("%s/\n", entry->d_name); // Subdirectory
                list_files(path); // Recursively list files in subdirectory
            } else {
                printf("%s\n", entry->d_name); // File
            }
        } else {
            perror("stat");
        }
    }

    closedir(dir);
}

int main() {
    char dir_name[1024];

    printf("Enter the directory name: ");
    scanf("%s", dir_name);

    list_files(dir_name);

    return 0;
}
