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

//finding sum of series
void sum_of_seriess(){
    int n = 5;
    int a =n,sum;
    for(int i=1;i<=n;i++){
        int sum = sum+ i;
        printf("%d",i);
    }
}

//amicabel nubers

int amicabel_numbers(){
    int n = 220;
    int i=1;
    for(i=1;i<n;i++){
    int divisor = n%i;
    
        if(divisor == 0){
            printf("  %d  ",i);
            
        }
    }
    int sum =0;
    sum=sum+i;
    printf(" \n %d",sum);
}

//menu driven program
int menu_driven_program(){
    int sum,a,b,dif,prod,ch;
    printf("\n Enter 1.To find the sum of two number 2. To find diffrence of two numbers 3.To find product of 2 numbers");
    scanf("%d",&ch);
    switch(ch){
        case 1: {
            printf("Enter first number \n");
            scanf("%d",&a);
            printf("Enter second number \n");
            scanf("%d",&b);
            sum = a+b;
            printf("%d",sum);
            
            break;
        }
        default:
            return 0;
    }
    return 0;
}