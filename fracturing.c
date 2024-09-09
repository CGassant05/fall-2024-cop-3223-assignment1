/*
Assignment 1
Author: Christopher Gassant
Class: COP 3223 Professor Juan Parra
Purpose: Create multiple fractures of code to determine distance, perimeter, area, width, and height using two points
*/

#define PI 3.14159
#include <stdio.h>
#include <math.h>

double calculateDistance(double a1, double a2, double b1, double b2) {

    printf("Enter the points for x1 and x2: \n");
    scanf("%lf ", &a1);
    scanf("%lf", &a2);

    printf("Enter the points for y1 and y2: \n");
    scanf("%lf ", &b1);
    scanf("%lf", &b2);

    double dist = sqrt(pow((a2-a1), 2)+pow((b2-b1), 2));
    return dist;
};


double calculatePerimeter(){
    double a1p, a2p, b1p, b2p;

    double peri = calculateDistance(a1p, a2p, b1p, b2p);
    peri = 2*PI*(peri/2);
    
    return peri;
};

double calculateArea(){
    double a1a, a2a, b1a, b2a;

    double are = calculateDistance(a1a, a2a, b1a, b2a);
    are = PI*(pow((are)/2, 2));

    return are;
};

double calculateWidth(){
    double a1w, a2w, b1w, b2w;

    double wid = calculateDistance(a1w, a2w, b1w, b2w);

    return wid;
};


double calculateHeight(){
    double a1h, a2h, b1h, b2h;

    double hei = calculateDistance(a1h, a2h, b1h, b2h);

    return hei;
};


int main()
{
    double x1, x2, y1, y2;

    
    
    double distance = calculateDistance(x1, x2, y1, y2);
    printf("The distance between the two points is %.2lf units\n", distance);
    
    double perimeter = calculatePerimeter(x1, x2, y1, y2);
    printf("The perimeter of the two points is %.2lf units\n", perimeter);
    
    double area = calculateArea(x1, x2, y1, y2);
    printf("The area of the two points is %.2lf units\n", area);
    
    double width = calculateWidth(x1, x2, y1, y2);
    printf("The width of the two points is %.2lf units\n", width);

    double height = calculateHeight(x1, x2, y1, y2);
    printf("The height of the two points is %.2lf units\n", height);


    return 1;
};
