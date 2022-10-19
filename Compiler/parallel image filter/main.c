#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <omp.h>

int main()
{

    for(int  i = 1; i<=8 ; i++){
    omp_set_num_threads(8);
    FILE *fIn = fopen("onboard_1.jpg", "rb");
    FILE *fOut = fopen("onboard_grey.jpg", "wb");
    if (!fIn || !fOut)
    {
        printf("File error.\n");
        return 0;
    }

    unsigned char header[54];
    fread(header, sizeof(unsigned char), 54, fIn);
    fwrite(header, sizeof(unsigned char), 54, fOut);

    int width = *(int*)&header[18];
    int height = abs(*(int*)&header[22]);
    int stride = (width * 3 + 3) & ~3;
    int padding = stride - width * 3;

    printf("width: %d (%d)\n", width, width * 3);
    printf("height: %d\n", height);
    printf("stride: %d\n", stride);
    printf("padding: %d\n", padding);

    unsigned char pixel[3];
    clock_t start, end;

    start = clock();

    #pragma omp parallel for
    for (int y = 0; y < height; ++y)
    {
        #pragma omp parallel for
        for (int x = 0; x < width; ++x)
        {
            fread(pixel, 3, 1, fIn);
            unsigned char gray = pixel[0] * 0.3 + pixel[1] * 0.58 + pixel[2] * 0.11;
            memset(pixel, gray, sizeof(pixel));
            fwrite(&pixel, 3, 1, fOut);
            //printf("loading small: %d\n",x);
        }
        fread(pixel, padding, 1, fIn);
        fwrite(pixel, padding, 1, fOut);
       // printf("loading large: \n");
    }
    end = clock();
    fclose(fOut);
    fclose(fIn);
    printf("time with %d threads is : %f\n",i,((double) (end - start)) / CLOCKS_PER_SEC);
    }
    return 0;
}
