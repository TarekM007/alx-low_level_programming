#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
char *string_nconcat(char *s1, char *s2, unsigned int n){
char *s, *snew;
unsigned int i, j, l1, l2, l3, size1, size2;

l1 = strlen(s1);
l2 = n * (sizeof(char));
l3 = strlen(s2);
size1 = (l1 + l2 + 1);
size2 = (l1 + l3 + 1);
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
if (n >= l3)
{
snew = calloc(size2, sizeof(char));
if (snew == 0)
return (0);
for (i = 0; i < l1; i++)
snew[i] = s1[i];
for (i = 0, j = l1; j < l1 + l3; j++, i++)
snew[j] = s2[i];
snew[j] = '\0';
return (snew);
}
s = calloc(size1, sizeof(char));
if (s == 0)
return (0);
for (i = 0; i < l1; i++)
s[i] = s1[i];
for (i = 0, j = l1; j < l1 + n; j++, i++)
s[j] = s2[i];
s[j] = '\0';
return (s);
}
