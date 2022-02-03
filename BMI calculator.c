#include <stdio.h>

int main (){
float a, b, h, bmi;
system("cls");
printf("Enter your weight in kg : ");scanf("%f", &a);
printf("Enter your height in cm : ");scanf("%f", &b);
h=b*0.01;
bmi=a/(h*h);
printf("\nYour BMI is : %f", bmi);
if (bmi >= 25){
    printf("\n\nYou're obese :(");
}
else if (bmi >= 25) {
    printf("\n\nYou're overweight");
}
else if (bmi >= 19) {
    printf("\n\nYour BMI is normal :)");
}
else {
    printf("\n\nYou're underweight :(");
}
    printf("\nThank you for using this calculator, stay safe <3\n\n");
}
