#include <stdio.h>

int main(){

  int score = 0;
    char answer;

    // Display question
    printf("1. What is the capital of Nepal?\n");
    printf("A. Pokhara\nB. Kathmandu\nC. Biratnagar\nD. Lalitpur\n");
    scanf(" %c", &answer);

      
    if(answer == 'B' || answer =='b' )
        score++;

    printf("Your Score: %d\n", score);

    printf("2. What is the highest mountain in the world?\n");
    printf("A. Mt K2\nB. Mt Fuji\nC. Mt Everest\nD.Mt Manaslu\n ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c')
        score++;

    {
    printf("Your Score: %d\n", score);

    }

    printf("3. What is the first Algorithm in the World?\n");
    printf("A. C\nB. C++\nC. Python\nD. Fortran\n ");
    scanf(" %c",&answer);

    if (answer == 'D' || answer == 'd' )
    score++;
    {
        printf(" Your Score: %d\n", score);

    }
    
    printf("4. When was the first world cup was held?\n");
    printf("A. 1940\nB. 1930\nC. 1934\nD. 1935\n");
    scanf(" %C",&answer);

    if (answer =='B' || answer =='b')
    score++;
    

        printf(" Your score: %d\n", score);
    

    printf("5. Which player Have highest assist in the Football?\n");
    printf("A. Ferenc Puskas\nB. Kevin De Bruyne\nC. Johan Cyruff\nD. Lionel Messi\n");
    scanf(" %c",&answer);

    if (answer =='D' || answer =='d' )
        score++;
     printf(" Your score : %d\n", score);
        












    printf("\n------------\n");
    printf("Final score is : %d / 10\n", score);
    printf("---------\n");


return 0;
}
   
          
    
   



    

    
  

