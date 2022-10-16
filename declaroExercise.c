 #include <stdio.h>
 
/*

In order to start with this activity, you need a flowchart pre-approved by your instructor.

I have written the description of the program below.

Make a flowchart showing your solution to the problem and upload your flowchart in .jpg/.png (image) format here.

Note: You may use any flowcharting software or have it hand written. The important thing is you upload the screen shot or a picture/scanned image of your work, so i may check before tuesdays exercise.

==============================================================================

Using the defined stages of life below,
make a C program that accepts input as age, and display the
equivalent stage of life.
ex. input age=30, output => "Adult" (without the qoutes)
Use the else if ladder for this exercise.

Defined "Stages of Life"
(defined only for this activity)

Infant = 0-1 year
Toddler = 2-4 yrs
Child = 5-12 yrs
Teen = 13-19 yrs
Adult = 20-39 yrs
Middle Age Adult = 40-59 yrs
Senior Adult = 60+
*/

// descriptions of stages in life
#define Infant "Infant = 0-1 year."
#define Toddler "Toddler = 2-4 years."
#define Child "Child = 5-12 years."
#define Teen "Teen = 13-19 years."
#define Adult "Adult = 20-39 years."
#define Middle "Middle = 40-59 years."
#define Senior "Senior = 60+."
#define Instruction "Enter your age to determine where you belong in this category.\n"

int main(){

int inputAge;
printf("\n");
printf("%s\n", Instruction); // this is an instruction for the user
printf("Stages in life:\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n\n",Infant,Toddler,Child,Teen,Adult,Middle,Senior); // this is the category of stages in life.

  // here are list of stages in life, I created this to declare what specific stage in life that the user is going to enter.
char stagesOFlife[7][20]= {"Infant","Toddler","Child","Teen","Adult","Middle","Senior",};

  // here we're goin to ask the user to input an age
printf("Please enter your age: ");
scanf("%d",&inputAge );
printf("\n");
// nested if statements using conditional oparators
if(inputAge > -1) // let's first check the age if it is not lessthan 0
{
if(inputAge >= 0 && inputAge <= 1){ // if the age is greaterthan or equal to 0 and lessthan or equal 1....
     printf("Stage of Life: %s\n\n",stagesOFlife[0]);  //this line of program will execute, otherwise the nextlines.
     }else if(inputAge >=2 && inputAge <=4){
     printf("Stage of Life: %s\n\n",stagesOFlife[1]);
     }else if(inputAge >=5 && inputAge <=12){
     printf("Stage of Life: %s\n\n",stagesOFlife[2]);
     }else if(inputAge >=13 && inputAge <=19){
     printf("Stage of Life: %s\n\n",stagesOFlife[3]);
     }else if(inputAge >=20 && inputAge <=39){
     printf("Stage of Life: %s\n\n",stagesOFlife[4]);
     }else if(inputAge >=40 && inputAge <=59){
     printf("Stage of Life: %s\n\n",stagesOFlife[5]);
     }else if(inputAge > 60){
    printf("Stage of Life: %s\n\n",stagesOFlife[6]);
    }
}
else{
printf("\nInvalid \"age\" \n"); // we have here a message to tell the user that age is invalid
}




}