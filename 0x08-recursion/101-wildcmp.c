#include <stdio.h>
int wildcmp(char *s1, char *s2);
int main() {
char str1[] = "hello";
char str2[] = "h*llo";
char str3[] = "h*ello";
printf("%d\n", wildcmp(str1, str2));
printf("%d\n", wildcmp(str1, str3));
return 0;
}
int wildcmp(char *s1, char *s2) {
if (*s1 == '\0' && *s2 == '\0') {
return 1;
}
if (*s2 == '*') {
return wildcmp(s1, s2 + 1) || (s1[0] != '\0' && wildcmp(s1 + 1, s2));
}
if (*s1 == *s2) {
return wildcmp(s1 + 1, s2 + 1);
}
return 0;
}
