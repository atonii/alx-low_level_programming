#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int targetSum = 2772;
  int num;
  int currentSum = 0;
  char randomChars[40]; // Adjust the size as needed to accommodate the characters.

  srand(time(0)); // Seed the random number generator with the current time.

  int i = 0;
  while (currentSum < targetSum)
    {
      randomChars[i] = rand() % 78;
      currentSum += randomChars[i] + '0';
      putchar(randomChars[i] + '0');
      if ((targetSum - currentSum) - '0' < 78)
	{
	  num = targetSum - currentSum - '0';
	  currentSum += num;
	  putchar(num + '0');
	  break;
	}
    }
  return 0;
}
