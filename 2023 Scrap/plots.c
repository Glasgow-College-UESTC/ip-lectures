#include "pbPlots.h"
#include "supportLib.h"

int main(){
    double grades[10] = {54, 68, 71, 50, 90, 76, 79, 40, 60, 13};
    double index[10] = {1,2,3,4,5,6,7,8,9,10};
    _Bool success;

    StartArenaAllocator();

    RGBABitmapImageReference *canvasReference = CreateRGBABitmapImageReference();
    StringReference *errorMessage = CreateStringReference(L"", 0);
    success = DrawScatterPlot(canvasReference, 600, 400, index, 10, grades, 10, errorMessage);

    if (success)
    {
        size_t length;
        ByteArray *pngdata = ConvertToPNG(canvasReference->image);
        WriteToFile(pngdata, "example1.png");
        DeleteImage(canvasReference->image);
    }
    else
    {
        fprintf(stderr, "Error: ");
        for (int i = 0; i < errorMessage->stringLength; i++)
        {
            fprintf(stderr, "%c", errorMessage->string[i]);
        }
        fprintf(stderr, "\n");
    }

    FreeAllocations();
}