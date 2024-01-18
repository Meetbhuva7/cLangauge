// print integer value of day of week using enum.
#include <stdio.h>
enum days
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    satruday
};
int main()
{

    // for (int i = sunday; i <= satruday; i++){
    //     printf("%d ",i);
    // }

    // or

    printf("\n sun is %d", sunday);
    printf("\n mon is %d", monday);
    printf("\n tue is %d", tuesday);
    printf("\n wed is %d", wednesday);
    printf("\n thu is %d", thursday);
    printf("\n fri is %d", friday);
    printf("\n sat is %d", satruday);

    return 0;
}