#include <stdio.h> 

int main (void)
{ 
    int coordinate_x;
    int coordinate_y; 

    printf ("X-Coordinate: "); 
    scanf ("%d", &coordinate_x); 
    printf ("Y-Coordinate: "); 
    scanf ("%d", &coordinate_y); 

    if (coordinate_x >= 0 && coordinate_y >= 0) // + , +
    { 
        printf ("1st Quadrant\n"); 

    }
    else if (coordinate_x <= 0 && coordinate_y >= 0) // - , +
    { 
        printf ("2nd Quadrant\n"); 

    }
    else if (coordinate_x >= 0 && coordinate_y <= 0) // + , -
    { 
        printf ("3rd Quadrant\n"); 

    }
    else {                                            // - , -
        printf ("4th Quadrant\n"); 
    }

}