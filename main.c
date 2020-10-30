#include <stdio.h>
    int main() {
        int Grade = 0;
        float score;
  printf("Input Score :");
  scanf("%f",&score);
if ( score <= 100 && score >= 80 )
  Grade = 1;
  else if( score <=79 && score >= 75 )
  Grade = 2;
  else if( score <= 74 && score >= 70 )
  Grade = 3;
  else if( score <= 69 && score >= 65 )
  Grade = 4;
  else if( score <= 64 && score >= 60 )
  Grade = 5;
  else if( score <= 59 && score >= 55 )
  Grade = 6;
  else if( score <=54 && score >= 50 )
  Grade = 7;
  else if ( score <= 49 && score >= 0 )
  Grade = 8;
switch (Grade){
   case 1: printf("A");
   break;
   case 2: printf("B+");
   break;
   case 3: printf("B");
   break;
   case 4: printf("C+");
   break;
   case 5: printf("C");
   break;
   case 6: printf("D+");
   break;
   case 7: printf("D");
   break;
   case 8: printf("F");
   break;
   default: printf("invalid");
   break;
}
        return 0;
    }