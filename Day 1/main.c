#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include "operator.c"
#include "header.h"


int main(){
    assert(add(1,5)==6);
    assert(uppercase_to_lowercase('A')=='a');
    // area of circle
    assert(area_of_circle(1) > 0);
    // distance between characers 
    number_of_characrtres_between('A','a');
    // Celcius to farehenit
    celcius_to_farehenit(50);
    // even or odd
    even_or_odd(3);
    // leap year
    leap_year(2016);
    // left shift
    left_shift_operator_to_find_two_power_n(2);
    // sum random two interg numer
    randnum();
    return 0;    
}

