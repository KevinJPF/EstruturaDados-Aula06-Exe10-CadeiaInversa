#include <stdio.h>
#include <string.h>

void *inv(char *s, int p, int u) {
  if (p >= u)
    return 0;

  inv(s, p + 1, u - 1);
  char aux = s[p];
  s[p] = s[u];
  s[u] = aux;
  //printf("%c - %c\n", s[p], s[u]);
  return 0;
}

int main(void) {
  char s[100] = "melancia";
  printf("%s", s);
  inv(s, 0, strlen(s) - 1);
  printf(" - %s", s);
  return 0;
}