#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float max1=0, max2=0, stu2=0;
    printf("Count of students : ");
    scanf("%i", &n);
    for(int i=0; i<n; i++) {
        float temp, stutemp;
        printf("Enter student number : ");
        scanf("%f", &stutemp);
        printf("Enter student average : ");
        scanf("%f", &temp);
        if( temp > max1) {
            max2 = max1;
            max1 = temp;
        } else if (temp > max2) {
            max2 = temp;
            stu2 = stutemp;
        }
    }
    printf("Second\'th big average belongs to : \n%.0f : %.2f", stu2, max2);

}
