#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char Generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
char Generateoutput(char c1, char c2)
{
        if(c1 == c2){
            return -1;
        }
        if((c1 == 'r') && (c2 == 's')){
            return 1;
        }
        else{ 
            return 0;;
        }
        if((c1 == 'p') && (c2 == 'r')){
            return 1;
        }
        else{ 
            return 0;;
        }
        if((c1 == 's') && (c2 == 'p')){
            return 1;
        }
        else{ 
            return 0;;
        }
                

}

    int main()
    {
        int plyscore = 0, compscore = 0, temp;
        char plychar, compchar;
        char dict[] = {'r', 'p', 's'};
        printf("Welcome to game\n");
        for (int i = 0; i < 3; i++)
        {

            printf("Player's choice: \n");
            printf("Enter 1 for Rock,Enter 2 for Paper,Enter 3 for Scissor:  ");
            scanf("%d", &temp);
            getchar();
            plychar = dict[temp - 1];
            printf("Player choice is:%c\n\n",plychar);

            printf("Computer's choice: \n");
            printf("Enter 1 for Rock,Enter 2 for Paper,Enter 3 for Scissor: ");
            temp = Generaterandomnumber(3) + 1;
            compchar = dict[temp - 1];
            printf("Computer choice is:%c\n\n",compchar);
        
        if (Generateoutput(compchar,plychar) == 1)
        {
            compscore += 1;
            printf("Computer won\n");
        }
         else if (Generateoutput(compchar,plychar) == -1) {
            compscore += 1;
            plyscore += 1;
            printf("It's draw\n");
         }
          else{
            plyscore += 1;
             printf("Player won\n");
          }

          printf("Player:%d\nComputer:%d\n\n",plyscore,compscore);
        }
          if (plyscore > compscore)
          {
            printf("Player win\n");
          }
         else if (plyscore < compscore)
          {
            printf("Computer win\n");
          }
          else{
            printf("It's draw\n");
          }
          
        
        return 0;
    }