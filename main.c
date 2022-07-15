//Aouthor :SOLOMON AYOO OMONDI
#include <stdio.h>
#include <stdlib.h>
// Relational operator : < > <= >= == !=
// Logical operators : && || !
// Control structures
// Selection/decision making/ conditional - if

int menu();
int main()
{
    printf("DIOR SNACK BAR APPLICATIONd!\n");
    menu();
    return 0;
}
int menu(){
int item;
printf("1. smine_off - ksh. 220\n");
printf("2. Tusker - ksh. 250\n");
printf("3. pourdin - ksh. 150\n");
printf("4. Berbeque - ksh. 180\n");
printf("5. Bacon - ksh. 80\n");
printf("6. Samosa - ksh. 50\n");
printf("7. Mishikaki - ksh. 50\n");
printf("8. Lime_juice - ksh. 500\n");

scanf("%d", &item);

if (item > 0 && item <=8){
    printf("\n item added to cart\n");
}
else {
    printf("invalid item\n");
    menu();
}
return item;

}
