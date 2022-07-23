#include <stdio.h>

int main(void) {
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int capacity = 10000;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    char ch; //definition of the charachter to be inputted
    char string[capacity]; //definition of the string to be inputted
    char sentence[capacity]; //definition of the sentence to be inputted
    
    scanf("%c", &ch); //get charachter input
    scanf("%s\n", &string); //get string input
    scanf("%[^\n]%*c", &sentence); //get sentence input
    
    printf("%c\n", ch); //print the inputted charachter
    printf("%s\n", string); //print the inputted string
    printf("%s\n", sentence); //print the inputted sentence
    
    return 0;
    
    

}
}