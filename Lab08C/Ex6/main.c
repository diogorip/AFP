#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void countVowels(char phrase[], bool insensitive) {
  int count[5] = {0};

  for (int i = 0; phrase[i]; i++) {
    char c = phrase[i];
    if (insensitive)
      c = tolower(c);

    if (c == 'a')
      count[0]++;
    else if (c == 'e')
      count[1]++;
    else if (c == 'i')
      count[2]++;
    else if (c == 'o')
      count[3]++;
    else if (c == 'u')
      count[4]++;
  }

  printf("a - %d\n", count[0]);
  printf("e - %d\n", count[1]);
  printf("i - %d\n", count[2]);
  printf("o - %d\n", count[3]);
  printf("u - %d\n", count[4]);
}

int main() {
  countVowels("Elabore um subprograma que receba uma string", true);
  return 0;
}
