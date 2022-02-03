//VIDEO URL: https://www.youtube.com/watch?v=87SH2Cn0s9A

#include <stdio.h>

//Prototypes
void hello(char[], int);


int main(){

    //Comment
    /*Multi
    Line Comment*/

    //Escape Sequence: \n for new line, and \t for new tab

    int x; //Declaring a variable
    x = 123; //initializing the variable
    int x = 123; //Combining declaration and initialization

    int age = 21; //Integer
    float gpa = 2.05; //Floating point number
    char grade = 'C'; //Char stores single character
    char name[] = "Bro"; //Array of characters
    double d = 3.1423432; //Stores twice the amount of digits as a float %lf
    bool e = true; //True or false statements, needs <stdbool.h> at the top. 1 = true, 0 = false %d
    

    printf("Hello %s", name); //Placeholders
    printf("You are %i years old.", age); //Placeholders
    printf("Your average grade is: %c", grade); //Placeholders
    printf("Your gpa is: %f", gpa); //Placeholders

    const float PI = 69; //Constant (uppercase the variable name)

    int x = 123;
    int y = 2;

    int z = x/(float)y; //This makes y a float during the division
    int t = x % y; //Gives remainder
    x++; //Increment
    y++; //Decrement


    int x = 10; //Augmented variables, when you do x = x + 1 it is a shortcut
    x = x + 2; //Augmented variables, when you do x = x + 1 it is a shortcut
    x+=2; //Augmented variables, when you do x = x + 1 it is a shortcut

    scanf("%d, &age"); //Gets input
    printf("You are %d years old", age); //Displays input

    char name[25]; //Setting bytes
    scanf("%s", &name); //Displays name (Cant read whitespaces)
    fgets(name, 25, stid); //Allows you to read passed any whitespaces. Use <string.h> if doing this cause makes new line

    double a = sqrt(9); //Gets square root
    double b = pow(2, 4); //Gets 2 to the power of 4
    int c = round(3.14); //Rounds the number up or down
    ind d = ceil(3.2); //Always rounds up
    int e = floor(4.2); //Always rounds down
    int r = fabs(2.4); //Absolute number, makes negatives positive
    int h = log(3); //Gets the log
    int t = sin(45); //Gets sine, can be used for cos and tan
    //INCLUDE <MATH.H>


    //Finding the circumference of a circle:
    int main(){
        
        cons double PI = 3.14159;
        double radius;
        double circumference;

        printf("Enter radius of the circle:");
        scanf("lf%", &radius);

        circumference = 2 * PI * radius;

        return 0;
    }

 

    //IF STATEMENTS
    int main(){

        int age;
        printf("What is your age?");
        scanf("%d", &age);

        if(age >= 18){
            printf("You are now signed up");//First if statement to run through
        }
        else if (age < 0){
            printf("You havent been born yet"); //New if statement to run through
        }
        else{
            printf("You are too young to sign up"); //last case scenario
        }
    }

    //SWITCH (replaces if statements that are too long, the object is the variable you are examining(grade))

    switch(grade){
        case 'A': printf("Perfect!");
        break;
        case 'B':printf("Great");
        break;
        case 'C':printf("Average");
        break;
        default: printf("invalid");
    }

    //Temperature Conversion Program
    //Include ctype.h and stdio.h

    int main(){

        char unit;
        float temp;

        printf("\nIs the temperature in (F) or (C)");
        scanf("%c", &unit);
        unit = toupper(unit);

        if (unit == 'C')
        {
            printf("Enter the temp in Celsius: ");
            scanf(%f, &temp);
            temp = (temp * 9 / 5) + 32;
            printf("The temp in farenheit is: %.1f" temp);
        }
        else if(unit == 'F'){
            printf("Enter the temp in Farenheit: ");
            scanf(%f, &temp);
            temp = ((temp - 32) * 5)/9;
            printf("The temp in Celsius is: %.1f" temp);

        }
        else{
            printf("%c is not a valid unit of measurement", unit);

        }


        return 0;
    }

    //Calculator Program (Use Stdio.h)

    int main(){

        char operator;
        double num1;
        double num2;
        double result;

        printf("\nEnter an operator (+ - * /): ");
        scanf("%c", &operator);

        printf("\nEnter number 1: ");
        scanf("%lf", &num1);

        printf("\nEnter Number 2: ");
        scanf("%lf", &num2);

        switch(operator){
            
            case '+':
            result = num1 + num2;
            printf("\nResult: %lf",result);
            break;
            case '-':
            result = num1 - num2;
            printf("\nResult: %lf",result);
            break;
            case '*':
            result = num1 * num2;
            printf("\nResult: %lf",result);
            break;
            case '/':
            result = num1 / num2;
            printf("\nResult: %lf",result);
            break;
            
            default: printf("%c is not valid", operator);

        }

    

    }

    //AND &&
    //OR ||
    //NOT ! 

    //FUNCTIONS
    void birthday(){

        printf("Happy birthday to you!");

    }
    int main(){

        birthday();
        birthday();
        birthday();

        return 0;
    }

    //ARGUMENTS AND PARAMETERS(WHAT FUNCTION EXPECTS WHEN INVOKED)
    void birthday(char name[], int age){

        printf("Happy birthday dear %s!", name);
        printf("You are %d years old!", age);

    }
    int main(){

        char name[] = "Bro";
        int age = 21;

        birthday(name, age);
    }

    //Return Statement

    double square(double x){

        return x * x;
    }

    int main()
    {
        double x = square(3.14);
        printf("%lf", x);

        return 0;
    }

    //Ternary Operator

    int findMax(int x, int y){

        if(x > y){
            return x;
        }
        else{
            return y;
        }

        return (x > y) ? x : y; //This substitutes that if statement
    }

    int main(){

        int max = findMax(3, 4);

        printf("%d", max);
    }

    //STRING FUNCTIONS (USE STRING.H)

    strlwr(String); //Converts all to lowercase
    strupr(String); //Converts all to uppercase


    //For Loop

    for(int index = 1; i <=10;i++) //Used to run a command a limited amount of times
    {
        printf("%d\n", i);
    }
return 0;

//While Loop

while(x = 0)
{
printf("x is 0");
}
printf("X is not 0");


//while loop

int main(){



    int number = 0;
    int sum = 0;

  do
    {
        printf("Enter a number above 0: ");
        scanf("%d", number);
        if (number > 0){
            sum += number;
        }
          while(number > 0)
    }
}


//Continued statement = skips rest of code and forces the next iteration of the loop
//break = exits a loop / switch

for(int i = 1; i <=20; i++)
{
    if(i == 13){
        break;
    }
    printf("%d\n",i);
}

//Arrays

int main()
{
    double prices[5] = {5.0, 10.0, 15.0, 29.0, 23};

    printf("%.2lf", prices[1]);

    return 0;
}

//Print array with loop

int main()
{
    double prices[5] = {5.0, 10.0, 15.0, 29.0, 23};

    printf("%d bytes\n", sizeof(prices));

    printf("%.2lf", prices[0]);

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){

        printf("%.2lf", prices[i]);
    }

    return 0;
}


//2D Array

int numbers[2][3] = {{1, 2, 3} {4, 5, 6}};

int numbers[2][3];

numbers[0][0] = 1;


//Array of strings

char cars[][10] = "Mustang","Corvette", "Camaro";

strcpy(cars[0], "Tesla");

//Swapping variables

char x[15] =  "water";
char y[15] = "lemonade";
char temp[15];

strcpy(temp,x);
strcpy(x,y);
strcpy(y,temp);

//Struct

struct player
{
    char name[12];
    int score;
};

struct player player1;
struct player player2;

strcpy(player1.name, "Bro");
player1.score = 4;
strcpy(player2.name, "Brah");
player2.score = 5;

//typedef

typedef struct
{
    char name[25];
    char password[12];
    int id;
}user;

int main(){

     user user1 = {"Bro", "Password123", 122332};
     user user2 = {"Bro2", "Passwor2d123", 1223322222};
     user user3 = {"Bro4", "Pass2word123", 122322232};
}

//enums
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed, Thu, Fri, Sat};

int main(){
        enum Day today = Sun;
        printf("%d", today);


//Random Number Generator (include stdlib.h & time.h)

srand(time(0));

int number1 = rand() % 6 + 1;
int number2 = rand() % 6 + 1;
int number3 = rand() % 6 + 1;

printf("%d", number1);
printf("%d", number2);
printf("%d", number3);

}

//Number Guessing Game

int main() {

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0)); //uses current time to generate seed

    answer = rand() % MAX + MIN;

    do{

        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!")
        }
        else if (guess < answer)
        {
            printf("Too low");
        }
        else {
            printf("You got it!")
        }
        guesses++;
    }while(guess != answer);

    printf("Answer: %d", answer);
    printf("Guesses: %d", guesses);

    printf("%d", answer);

}

//Pointers

int age = 21;
int *pAge = &age;

printf("address of age: %p", &age);
printf("value of age: %d", &age);


//Writing/appending to a file

int main(){

    FILE *pF = fopen("test.txt", "w");

    fprintf(pF, "Whats up bro");

    fclose(pF);

//Removing file
    if(remove("test.txt") == 0){
        printf("File deleted.");
    }
    else{
        printf("File not deleted.");
    }


}

//Read file

int main(){

    FILE *pF = fopen("Filepath.txt", "r");
    char buffer[255];

    if(pF == NULL){
        
        printf("Unable to open file.");
    }
    else {

    while (fgets(buffer, 255, pF) != NULL){

    printf("%s", buffer);

    }
    fclose(pF);
    }

}

//TIC TAC TOE GAME (stdio, stdlib, ctype, time)

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

char board[3][3];
const char PLAYER = 'x';
const char COMPUTER = 'o';

int main(){

    char winner = ' ';
    resetBoard();
    printBoard();



}


void resetBoard()
{
    for(int i =0; i < 3; i++)
    {
        for(int j = 0; j < 3;  ++)
        {
            board[i][j];
        }
    }

}
void printBoard()
{
        printf(" %c | %c | %c ",)
}
int checkFreeSpaces()
{

}
void playerMove()
{

}
void computerMove()
{

}
char checkWinner()
{

}
void printWinner(char winner)
{

}
























