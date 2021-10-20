#include <stdio.h>
#include <math.h>

int *sec2time(int secs) {
    static int time[3];
    
    int value = secs;

    for (int i=2; i >= 0; i--) {
        time[i] = value % 60;
        value = floor(value / 60);
    }

    return time;
}

int main() {
    int seconds;
    int *time;

    printf("\nSeconds: ");
    scanf("%d", &seconds);

    time = sec2time(seconds);
    
    printf("\nTime: ");
    for (int i = 0; i < 3; i++) {
        printf("%02d%s", time[i], i < 2 ? ":" : "");
    }
    printf("\n\n");
}

