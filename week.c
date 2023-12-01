#include <stdio.h>

int main() {
    char day;

    printf("Press M For Monday \n\n");
	printf("Press T For Tuesday  \n\n");
	printf("Press W For Wednesday  \n\n");
	printf("Press H For Thursday \n\n");
	printf("Press F For Friday \n\n");
	printf("Press A For Saturday \n\n");
	printf("Press S For Sunday \n\n");
	
	printf("Enter The First latter\n");
	scanf("%c",&day);
	

    switch (day) {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
        case 'H':
        case 'h':
            printf("Thursday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'A':
        case 'a':
            printf("Saturday\n");
            break;
        case 'S':
        case 's':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input!\n");
            break;
    }

    
}

