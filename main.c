//Author: Jamys Solosky jjs7331@psu.edu 
//Collaborator: Timothy Zheng txz5165@psu.edu 
//Collaborator: Colton Giordano cjg5896@psu.edu
//Collaborator: Lauren Hughes lmh5981@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char*temp = readline("Enter temperature in celsius: ");
  double celsius = atof(temp);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsius, celsius*9/5+32);
}