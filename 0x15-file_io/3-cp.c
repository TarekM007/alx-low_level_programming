
#include "main.h"

int main(int argc, char *argv[]) {
 int ch;
    const char *file_from = argv[1];
    const char *file_to = argv[2];
    FILE *source = fopen(file_from, "rb");
   FILE *destination = fopen(file_to, "wb");

    if (argc != 3) {
        printf("Usage: cp file_from file_to\n");
        return 1;
    }


    if (source == NULL) {
        printf("Failed to open the source file: %s\n", file_from);
        return 1;
    }

 
    if (destination == NULL) {
        printf("Failed to create or open the destination file: %s\n", file_to);
        fclose(source);
        return 1;
    }

   
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");
    return 0;
}
