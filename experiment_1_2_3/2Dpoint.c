/*8. Develop a program to create a structure for a 2D point and use it to calculate the 
distance between two points. */
#include <stdio.h>
#include <math.h>


struct Point {
    int x;
    int y;
};


float distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct Point p1, p2;

    printf("Enter coordinates of first point (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Enter coordinates of second point (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    float dist = distance(p1, p2);

    printf("Distance between points = %.2f", dist);

    return 0;
}