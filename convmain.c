#include <stdio.h>

double yardsFeet(double yards);

double metersYards(int meters);

int main(){
    
    int meters;

    double yards;
    
    double feet;
    

    printf("Enter meters here: \n");
    scanf("%d", &meters);
    
    yards = metersYards(meters);
    printf("The number in yards is: %.6lf\n", yards);

    feet = yardsFeet(yards);
    printf("The number in feet is: %.6lf\n", feet);
    
   
}