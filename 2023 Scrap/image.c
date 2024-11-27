#include <stdio.h>

int main() {
    int width = 1000;
    int height = 1000;
    unsigned char image[height][width][3];

    // Set all pixels to blue
    for(int i=0; i<height; i++) {
        for(int j=0; j<width; j++) {
            image[i][j][0] = 0;
            image[i][j][1] = 0;
            image[i][j][2] = 255;
        }
    }

    // Set pixels for the cross symbol to green
    // This is just a placeholder, you'll need to adjust the conditions to get a cross shape
    for(int i=400; i<600; i++) {
        for(int j=400; j<600; j++) {
            image[i][j][0] = 0;
            image[i][j][1] = 255;
            image[i][j][2] = 0;
        }
    }

    // Here you would add code to write the image data to a file
    // The specifics depend on the image format you want to use

    FILE *file;
        file = fopen("image.ppm", "w");
    fprintf(file, "P6\n%d %d\n255\n", width, height);
    fprintf(fopen("image.ppm", "w"), "P6\n%d %d\n255\n", width, height);
    for(int i=0; i<height; i++) {
        for(int j=0; j<width; j++) {
            fputc(image[i][j][0], file);
            fputc(image[i][j][1], file);
            fputc(image[i][j][2], file);
        }
    }
    fclose(file);

    return 0;
}
