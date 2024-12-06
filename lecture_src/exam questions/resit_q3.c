#include <stdio.h>

// Function to find the lowest signal in daytime readings
void find_lowest_signal_daytime(int signal[], int *min_day, int *min_signal)
{
    *min_day = 0;
    *min_signal = signal[0];
    for (int i = 1; i < 7; i++)
    {
        if (signal[i] < *min_signal)
        {
            *min_signal = signal[i];
            *min_day = i;
        }
    }
}

// Function to find the lowest signal in nighttime readings
void find_lowest_signal_nighttime(int signal[], int *min_day, int *min_signal)
{
    *min_day = 0;
    *min_signal = signal[0];
    for (int i = 1; i < 7; i++)
    {
        if (signal[i] < *min_signal)
        {
            *min_signal = signal[i];
            *min_day = i;
        }
    }
}

// Function to recommend signal adjustments if signal is below 60% of max
void recommend_signal_adjustment(int signal[], int max_signal, const char *period)
{
    int threshold = max_signal * 0.6;
    printf("\nSignal adjustment recommended for the following days (%s):\n", period);
    int adjustment_needed = 0;
    for (int i = 0; i < 7; i++)
    {
        if (signal[i] < threshold)
        {
            adjustment_needed = 1;
            switch (i)
            {
            case 0:
                printf("- Monday (%d units)\n", signal[i]);
                break;
            case 1:
                printf("- Tuesday (%d units)\n", signal[i]);
                break;
            case 2:
                printf("- Wednesday (%d units)\n", signal[i]);
                break;
            case 3:
                printf("- Thursday (%d units)\n", signal[i]);
                break;
            case 4:
                printf("- Friday (%d units)\n", signal[i]);
                break;
            case 5:
                printf("- Saturday (%d units)\n", signal[i]);
                break;
            case 6:
                printf("- Sunday (%d units)\n", signal[i]);
                break;
            }
        }
    }
    if (!adjustment_needed)
    {
        printf("No adjustments required for %s.\n", period);
    }
}

// Function to clear input buffer in case of invalid input
void clear_input_buffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

int main()
{
    int daytime_signal[7], nighttime_signal[7];
    int min_daytime_signal, min_nighttime_signal;
    int min_daytime_day, min_nighttime_day;
    int max_daytime_signal = 0, max_nighttime_signal = 0;
    int input_valid;

    // Input daytime signal strength for each day
    printf("Input the daytime signal strength for each day (Monday to Sunday):\n");
    for (int i = 0; i < 7; i++)
    {
        do
        {
            printf("Day %d daytime signal strength: ", i);
            input_valid = scanf("%d", &daytime_signal[i]);
            if (input_valid != 1 || daytime_signal[i] < 0 || daytime_signal[i] > 100)
            {
                printf("Invalid input! Please enter a number between 0 and 100.\n");
                clear_input_buffer(); // Clear buffer on invalid input
            }
        } while (input_valid != 1 || daytime_signal[i] < 0 || daytime_signal[i] > 100);
        if (daytime_signal[i] > max_daytime_signal)
        {
            max_daytime_signal = daytime_signal[i]; // Find maximum daytime signal
        }
    }

    // Input nighttime signal strength for each day
    printf("\nInput the nighttime signal strength for each day (Monday to Sunday):\n");
    for (int i = 0; i < 7; i++)
    {
        do
        {
            printf("Day %d nighttime signal strength: ", i);
            input_valid = scanf("%d", &nighttime_signal[i]);
            if (input_valid != 1 || nighttime_signal[i] < 0 || nighttime_signal[i] > 100)
            {
                printf("Invalid input! Please enter a number between 0 and 100.\n");
                clear_input_buffer(); // Clear buffer on invalid input
            }
        } while (input_valid != 1 || nighttime_signal[i] < 0 || nighttime_signal[i] > 100);
        if (nighttime_signal[i] > max_nighttime_signal)
        {
            max_nighttime_signal = nighttime_signal[i]; // Find maximum nighttime signal
        }
    }

    // Find lowest daytime signal and the corresponding day
    find_lowest_signal_daytime(daytime_signal, &min_daytime_day, &min_daytime_signal);
    printf("\nThe lowest daytime signal was on day %d with %d units.\n", min_daytime_day, min_daytime_signal);

    // Find lowest nighttime signal and the corresponding day
    find_lowest_signal_nighttime(nighttime_signal, &min_nighttime_day, &min_nighttime_signal);
    printf("The lowest nighttime signal was on day %d with %d units.\n", min_nighttime_day, min_nighttime_signal);

    // Recommend signal adjustment for daytime readings if below 60% of max daytime signal
    recommend_signal_adjustment(daytime_signal, max_daytime_signal, "daytime");

    // Recommend signal adjustment for nighttime readings if below 60% of max nighttime signal
    recommend_signal_adjustment(nighttime_signal, max_nighttime_signal, "nighttime");

    return 0;
}
