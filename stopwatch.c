#include <stdio.h>
#include <time.h>               //header file that contains date and time info

int main() 
{

clock_t start, end;   //defined in header file (time.h)
double passed_time;

  printf("Press ENTER to start the stopwatch....\n");
  getchar(); 
  start = clock(); 

    printf("Stopwatch started.\n");
    printf(" Press ENTER to stop...\n");
    getchar();                                            
    end = clock(); 


    passed_time = (double)(end - start) / CLOCKS_PER_SEC;


    printf("passes time: %.2f seconds\n", passed_time);


 return 0;
}