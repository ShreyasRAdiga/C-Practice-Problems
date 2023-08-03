//Program to convert uppercase to lowercase
#define P 3.14159
// addition of two integer
int add(int x, int y){
    return x + y;
}
// uppercase to lowercase
char uppercase_to_lowercase(char input){
    if(input >= 65 && input <= 90) return input + 32;
    return '#';
}
// area of circle
int area_of_circle(float r){
    return P*r*r;
}
// distance b/w two characters
char number_of_characrtres_between(char x, char y){
    int first_character = (int)x;
    int secon_character =(int)y;
    int distance = secon_character-first_character-1;
    //char ch= secon_character-first_character-1;
    printf("%d",distance);
}
// celcius to farehenit
float celcius_to_farehenit(float c){
    float cel = (c *1.8)+32;
    printf("\n%f",cel);
}
// even or odd
int even_or_odd(int number){
    int cal = number%2;
    if(cal==0){
        printf("\nEven");
    }
    else
        printf("\nodd");
}
// Leap year or not
int leap_year(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("\n%d: is Leap year",year);
    }
    else
        printf("\n%d: is Not Leap Year",year);
}
// find 2^n using left shift operator
int left_shift_operator_to_find_two_power_n(int n){
    if(n==0){
        printf("\n1");
    }
    else if(n<0){
    printf("Negative Values not allowed");
    }
    else {
        int b= 2<<n-1;
        printf("\n%d",b);
    }
}


// Random numbers

void randnum(){
    
    int a = rand();
    int b = rand();
    int c = a+b;
    printf("\nrand1:%d\nrand2:%d\nsum:%d",a,b,c);
}