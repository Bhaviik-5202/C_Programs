/* Calculate angle between hour hand and minute hand */

#include <stdio.h>
int main()
{
    int hour, minute;
    float hour_angle, minute_angle, angle;

    printf("Enter hour and minute: ");
    scanf("%d %d", &hour, &minute);

    if(hour >= 12)
        hour = hour - 12;

    hour_angle = (hour * 30) + (minute * 0.5);
    minute_angle = minute * 6;

    angle = hour_angle - minute_angle;

    if(angle < 0)
        angle = -angle;

    if(angle > 180)
        angle = 360 - angle;

    printf("Angle = %.2f degrees", angle);

    return 0;
}
