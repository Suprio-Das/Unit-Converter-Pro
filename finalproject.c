#include <stdio.h>

//function for main menu
void mainmenu(){
    int choice;
    printf(" ---User Menu---\n");

    //2D shape calculation
    printf(" 1. 2D Shape Calculation\n");

    //Ohm's law calculation
    printf(" 2. Ohm's Law Calculation\n");

    //Unit conversion
    printf(" 3. Unit Conversion\n");

    //Help Desk
    printf(" 4. Help\n");

    //Exit option
    printf(" 5. Exit\n");

    while(1){
        printf(" Select an option: ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            shapecalculation();
            break;
        case 2:
            ohmlawcalculation();
            break;
        case 3:
            unitconversion();
            break;
        case 4:
            help();
            break;
        case 5:
            printf("Exiting the program...\n");
            exit(0);

        }
    }
}
//function for 2D shape calculation
void shapecalculation();
//function for Ohm's law calculation
void ohmlawcalculation();
//function for unitconversion calculation
void unitconversion();
//function for help desk
void help();

int main(){
    mainmenu();
    return 0;
}

void shapecalculation(){
    int choice;
    double sq_side, h, b,l,w,area;
    //sub-menu of 2D shape
    printf(" \t 1. Square\n");
    printf(" \t 2. Rectangle\n");
    printf(" \t 3. Triangle\n");
    printf(" \t **Enter -1 to back to main menu.**\n");

    do{
        printf(" Select an option: ");
        scanf("%d",&choice);

        switch(choice){
            //case to back to the main menu
            case -1:
            mainmenu();
            break;
            case 1:
            printf(" Enter the side: ");
            scanf("%lf",&sq_side);
            area = sq_side*sq_side;
            printf(" The area of the square is: %.2lf\n",area);
            break;
            case 2:
            printf(" Enter the length and width: ");
            scanf("%lf %lf", &l, &w);
            area = l*w;
            printf(" The area of the rectangle is: %.2lf\n",area);
            break;
            case 3:
            printf(" Enter base and height: ");
            scanf("%lf %lf",&b, &h);
            area = (0.5*(b*h));
            printf(" The area of the triangle is: %.2lf\n",area);
            break;
        }
    }while(choice != -1);
}

void ohmlawcalculation(){
    int choice;
    double V, I, R;
    //sub-menu of Ohm's law
    printf(" \t 1. Voltage\n");
    printf(" \t 2. Current\n");
    printf(" \t 3. Resistance\n");
    printf(" \t **Enter -1 to back to main menu.**\n");

    while(choice != -1){
        printf(" Select an option: ");
        scanf("%d",&choice);

        if(choice == -1){
            mainmenu();
            break;
        }
        else if(choice == 1){
            printf(" Enter the value of current(I) and resistance(R): ");
            scanf("%lf %lf", &I, &R);
            printf(" The value of voltage is: %.2lf\n", I*R);
        }
        else if(choice == 2){
            printf("Enter the value of voltage(V) and resistance(R): ");
            scanf("%lf %lf", &V, &R);
            printf("The value of current is: %.2lf\n", V/R);
        }
        else if(choice == 3){
            printf(" Enter the value of voltage(V) and current(I): ");
            scanf("%lf %lf", &V, &I);
            printf(" The value of resistance is: %.2lf\n", V/I);
        }
    }
}

void unitconversion(){
    int choice;
    double inch, kilometer, celcius;

    //sub-menu of unit conversion
    printf(" \t 1. Inch to Centimeters\n");
    printf(" \t 2. Kilometer to Miles\n");
    printf(" \t 3. Celcius to Fahrenheit\n");
    printf(" \t **Enter -1 to back to main menu.**\n");

    // Initialize choice before entering the loop
    choice = 0;

    while(choice != -1){
        printf(" Select an option: ");
        scanf("%d",&choice);

        switch(choice){
        case -1:
            mainmenu();
            break;
        case 1:
            printf(" Enter Inches: ");
            scanf("%lf",&inch);
            printf("The Centimeters is: %.2lf\n", inch*2.54);
            break;
        case 2:
            printf(" Enter Kilometer: ");
            scanf("%lf",&kilometer);
            printf(" The Miles is: %.2lf\n",kilometer/1.609);
            break;
        case 3:
            printf(" Enter Celcius: ");
            scanf("%lf",&celcius);
            printf(" The Fahrenheit is: %.2lf\n", (celcius*9/5)+32);
            break;
        }
    }
}

//help desk
void help(){
    printf("\t --Help\n");
    printf("\t\t > TO find the 2D shapes calculations, enter 1. Then, select your desired shape.\n");
    printf("\t\t > To perform Ohm's law calculations, enter 2. Then, select your desired operation.\n");
    printf("\t\t > To perform Unit conversion, enter 3. Then, select your desired unit.\n");
    printf("\t\t > To find this help desk, enter 4.\n");
    printf("\t\t > If you want to go back to the main menu, enter -1.\n");
    printf("\t\t > To exit the program enter 5.\n");
}

