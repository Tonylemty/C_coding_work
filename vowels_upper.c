# include <stdio.h>

int main()
{
  char str[1000] = "aeiou, aeiour";
  int j;

  for (j = 0; str[j] != '\0'; j++) {
    if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u') {
        str[j] = str[j] - 'a' + 'A';
    }
  }
  printf("%s", str);
  return 0;
}