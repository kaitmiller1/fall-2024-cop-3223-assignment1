//********************************************************
// fracturing.c
// Author: Kaitlyn Miller
// Date: 9/04/24
// Class: COP 3223, Professor Parra
// Purpose: This program is designed to have the author create
// a program that will house many internal functions. 
// Input: 1 2, 3, 4, 1, 2, 3, 4, 1, 
// 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4
// Output: text and various doubles depending on the function
// //********************************************************

# include <stdio.h>
# include <math.h>
# include <string.h>
# define  PI 3.14159

double askForUserInput(){
    double retVal;
    printf("Enter a value: ");
    scanf(" %lf", &retVal);
    return retVal;
}

double getDistance(){
    double p1X = askForUserInput();
    double p2X = askForUserInput();
    double p1Y = askForUserInput();
    double p2Y = askForUserInput();

    double distance = sqrt(pow((p1X-p2X),2) + pow((p1Y-p2Y),2));

    printf("\nPoint #1 entered: x1 = %.3lf; y1= %.3lf", p1X, p1Y);
    printf("\nPoint #2 entered: x2 = %.3lf; y2= %.3lf\n", p2X, p2Y);

    return distance;
}


double calculateDistance(){
    double distance = getDistance();
    
    printf("The distance between the two points is %.3lf\n", distance);

    return distance;
}

double calculatePerimeter(){
    double perimeter = (getDistance() * PI);
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);

    return 3.0;

}

double calculateArea(){
    double area = (pow((getDistance()/2),2)* PI);
    printf("The area of the city encompassed by your request is %.3lf\n", area);

    return 3.0;

}

double calculateWidth(){
    double width = getDistance();
    printf("The width of the city encompassed by your request is %.3lf\n", width);

    return 2.0;

}

double calculateHeight(){
    double height = getDistance();
    printf("The height of the city encompassed by your request is %.3lf\n", height);

    return 2.0;
}

int main(int argc, char **argv){
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
