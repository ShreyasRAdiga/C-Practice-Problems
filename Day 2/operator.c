int sum_of_five_digit(){
    int a=12345,sum=0;
    while(a>0){
        //printf("\n%d",a);
        int b = a%10;
        printf("\n%d\n",b);
        sum+=b;
        printf("\n%d\n",sum);
        printf("\n a: %d\n");
        a=a/10;
        printf("%d",a);
    }
    printf("\n%d",sum);
    
}

int reverse_of_number(){
    int number = 123456789;
    int sum, reverse = 0;
    while (number != 0){
        sum = number%10;
        reverse =reverse * 10 + sum;    
        number = number/10;
    }
    printf("%d",reverse);
} 

int armstrong(){
    int a = 153,rem,sum =0;
    while(a>0){
        rem = a%10;
        sum = pow(rem,3);
    }
    printf("%d",sum);
    

}

char stringcopy(){
char a;
scanf("%c",&a);
printf("%c",a);
}

//count the occurrences of a digit in a number
int count_occurance(){
    int input_number=1234567891;
    int input_search=1;
    int result_serach = 0;
    int rem;
    
    while (input_number){
        rem = input_number%10;
        if(rem ==  input_search){
            result_serach++;
        }
        input_number/=10;
    }
    printf("\n%d",result_serach);
    return 0;
}

// Palindrome number

int palindrome(){
    int input_number =  145234521;
    int sum = 0;
    int temp = input_number;
    int rem;
    while(input_number>0){
        rem = input_number%10;
        sum =sum*10+rem;
        input_number/=10;
    }
    if (temp == sum){
        printf("\n The Entered number is palindrome: %d = %d",temp,sum);
    }
    else
        printf("\n The enterd number is not plaindrome: %d != %d",temp,sum);
    
}

// genrating prime numbers

int prime_numbers(){
    int n =50,divider=0,i=1;
    printf("\n _ \n");
    while(i<=n){
        // divider=i;
        // int result,result_for_second,printing_number;
        // printing_number = i;
        // result = i%1;
        // result_for_second = divider%divider;
        // if(result==0 && result_for_second == 0){
        //     printf("%d",printing_number);
        // }
        int rem = i%2;
        if(rem == 0){
        printf(" %d ",i);
        }
        i = i+2;
    }
    
}