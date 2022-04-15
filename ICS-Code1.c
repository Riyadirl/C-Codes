
#include <stdio.h>
#include <string.h>

int main()
{
    char option;
    char digits[20];
    char character[20];
    char str[100], ch;
    char arr[50], search_key;
    int num;
    int i;
    int shift;
    int count = 0;
    
    
    printf("Choose one option from 'a-e'\n");
    printf("a: Take a number from the user and show the number as an integer\n");
    printf("b: Take multiple charecters input from the user. Count how many digits are there, and find the sum and the maximum\n");
    printf("c: Take multiple charecters input from the user. Perform Caesar cipher or caesar shift\n");
    printf("d: Take one charecterinput from the user. That is the search key. Then take multiple charecters input from the user and count how many times search key appears\n");
    printf("e: Take multiple charecters input from the user. Flip the cases and show output\n\n");
    scanf("%c", &option);
    
    switch(option){
        case 'a':              
                printf("Enter a number: ");  
   
                //reads and stores input 
                scanf("%d", &num);

                //displays output
                printf("You entered: %d", num);
                
        break;
        
        case 'b':        
                printf("Enter numbers: ");
                scanf("%s", digits);

                int count=0, sum = 0, max = 0;
                
                for(i = 0; i < strlen(digits); i++){
                    if(digits[i]>='0'&& digits[i] <= '9'){
                        int t = digits[i] - '0';
                        count++;
                        sum += t;
                        if(max < t) max = t;
                    }
                }

                printf("Total digits: %d\n", count);
                printf("Sum of digits: %d\n", sum);
                printf("Maximum number of digits: %d\n", max);
                
        break;
        
        case 'c':              
                printf("Enter a text: \n");
                scanf("%s", str);
    
                printf("How many places to shift: \n");
                scanf("%d", &shift);
    
                for(i = 0; str[i] != '\0'; ++i){
                    ch = str[i];
                    if(ch >= 'a' && ch <= 'z'){
                        ch = ch + shift;
                        if(ch > 'z'){
                            ch = ch - 'z' + 'a' - 1;
                        }
                        str[i] = ch;
                    }
                    else if(ch >= 'A' && ch <= 'Z'){
                        ch = ch + shift;
                        if(ch > 'Z'){
                            ch = ch - 'Z' + 'A' - 1;
                        }
                        str[i] = ch;
                    }
                }
                printf("shifted text: %s", str);
                
        break;
        
        case 'd':      
               
                printf("Enter a character for search key: ");
                scanf("%c", &search_key);
    
                printf("Enter a text: ");
                scanf("%s", arr);

                for (int i = 0; arr[i] != '\0'; ++i) {
                    if (search_key == arr[i])
                    ++count;
                }

                printf("Frequency of %c = %d", search_key, count);
                
        break;
        
        case 'e':         
                scanf("%s", character);

                for(i = 0; i < strlen(character); i++){
                    if(character[i] >= 'a' && character[i] <= 'z') {
                        character[i] = 'A' + character[i] - 'a';
                    }
                    else{
                        character[i] = 'a'+ character[i] - 'A';
                    }
                }

                printf("%s\n", character);
                
        break;
    }
    
    
    return 0;
}

