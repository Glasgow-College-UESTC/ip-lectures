gcc -c pbPlots.c -std=c99 -O3 -march=native
gcc -c supportLib.c -std=c99 -O3 -march=native
gcc -c plots.c -std=c99 -O3 -march=native
gcc plots.o pbPlots.o supportLib.o -lm -o plots
strip plots
./plots


