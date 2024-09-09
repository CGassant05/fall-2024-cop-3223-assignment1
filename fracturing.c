/*
Assignment 1
Author: Christopher Gassant
Class: COP 3223 Professor Juan Parra
Purpose: Create multiple fractures of code to determine distance, perimeter, area, width, and height using two points
*/

#define PI = 3.14159
#include <stdio.h>
#include <math.h>

double calculateDistance(double a1, double a2, double b1, double b2) {

    double dist = sqrt(pow((a2-a1), 2)+pow((b2-b1), 2));
    return dist;
};

int main()
{
    double x1, x2, y1, y2;
    

    printf("Enter the points for x1 and x2: \n");
    scanf("%lf ", &x1);
    scanf("%lf", &x2);

    printf("Enter the points for y1 and y2: \n");
    scanf("%lf ", &y1);
    scanf("%lf", &y2);
    
    double distance = calculateDistance(x1, x2, y1, y2);

    printf("The distance between the two points is %.2lf units\n", distance);
    /*calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight(); */

    return 1;
};