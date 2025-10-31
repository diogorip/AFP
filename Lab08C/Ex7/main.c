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
    else if (c == 'b')
      count[1]++;
    else if (c == 'c')
      count[2]++;
  }

  printf("a - %d\n", count[0]);
  printf("b - %d\n", count[1]);
  printf("c - %d\n", count[2]);
}

int main() {
  countVowels("Elabore um subprograma que receba uma string", "abc");
  return 0;
}
