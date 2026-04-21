#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

int gl(char s[], int lim);
void copy(char to[], char from[]);
int removeTrailing(char s[], int len);
int reverse(char line[], int len);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = gl(line, MAXLINE)) > 0) {
    removeTrailing(line, len);
    if (len > LIMIT) {
      printf("%s %s\n", "LINE>80", line);
    }

    reverse(line, len);
    printf("%s\n", line);

    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0)
    printf("%s\n", longest);
  return 0;
}

int gl(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
int removeTrailing(char s[], int len) {
  int i;
  for (i = len - 2; s[i] == '\t' || s[i] == ' '; i--)
    ;
  s[i + 1] = '\n';
  s[i + 1] = '\0';
}
int reverse(char line[], int len) {
  char prev;

  for (int i = 0; i <= len / 2 - 1; i++) {
    prev = line[i];
    line[i] = line[len - 2 - i];
    line[len - 2 - i] = prev;
  }
  line[len] = '\0';
  line[len - 1] = '\n';
}
