#include <stdio.h>

int main(void)
{
    int rows;
    printf("Enter an odd number of rows in your diamond: ");
    scanf("%d", &rows); //Getting user input to define the int "rows" to the number of rows they want their diamond to be

    //Condition in the if statement to see if the user input for rows is an even number
    if (rows%2 == 0){
        printf("%d is not an odd number. The program will produce %d rows instead:\n\n", rows, rows + 1);
        rows = rows + 1; //Redefining rows to be 1 number more than what the user entered if the condition of the if statement is met, i.e. an even number to make it odd
    }

    int count = 1;
    int space = (rows + 1)/2; //These are the number of spaces I want in the first row

    printf("-------------------------------------------------\n");

    /*          Printing the top half of the diamond to middle row          */
    //////////////////////////////////////////////////////////////////////////

    //First while statement that loops "(rows+1)/2" amount of times
    while(count <= rows){
            //Integers that I want to reset at the start of each loop
            int num = 1;
            int stars = 1;

        //Second while loop to loop the amount of times I want the stars to print
        while(stars <= count){
                //Final while loop that loops the amount of times I want the spaces to print
                while(num <= space){
                    printf(" "); //Prints the spaces
                    num++;       //Increments num
                }//Loop ends when "num" is less than or equal to the int "space"
            printf("*"); //Prints a star
            stars++;     //Increments starts
        }//Loop ends when the int "stars" is less than or equal to the int "count"
        space--;           //Decrements "space" so that the next row will have one less space
        printf("\n");      //Goes to the next row
        count = count + 2; //"count" gets incremented twice "2 added to it" after each first loop runs
    }//Loop ends when "count" is less than or equal to "rows" or until it has looped "(rows+1)/2" times

    /*                  Printing one row below middle row to the last row                     */
    ////////////////////////////////////////////////////////////////////////////////////////////

    count = (rows-1)/2;    //Redefining count to be the number of rows remaining to print
    space = 2;             //Redefining space to be 2 as this is the number of spaces I need in the row below the middle one
    int count1 = 1;
    int count2 = rows - 2; //Integer for stars loop as this is the number of stars I need in the row below the middle one

    //First while loop to loop "(rows-1)/2" times
    while(count1 <= count){
            //Integers that I want to reset at the start of each loop
            int num = 1;
            int stars = 1;
        //Second while loop to loop the amount of times I want the stars to print
        while(stars <= count2){
                //Final while loop that loops the amount of times I want the spaces to print
                while(num <= space){
                    printf(" ");
                    num++;
                }//Loop ends when "num" is less than or equal to the int "space"
            printf("*");
            stars++;
        }//Loop ends when the int "stars" is less than or equal to the int "count2"
        space++;             //Incrementing "space" so that the next row will have one more space than the last
        printf("\n");        //Goes to the next row
        count1++;            //Incrementing count1 for first while loop
        count2 = count2 - 2; //Decrementing count2 twice or subtracting 2 each time to print 2 less stars each time
    }

    printf("-------------------------------------------------");

    return 0;
}
