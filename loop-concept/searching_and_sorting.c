#include <stdio.h>
#define MAXVAL 10
#define COUNTER 11
int main()
{
  int i, low, high;
  float value[MAXVAL];
  int group[COUNTER] = {0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0};
  for (i = 0; i < MAXVAL; i++)
  {
    scanf("%f", &value[i]);
    ++group[(int)(value[i]) / 10];
  }
  for (i = 0; i < COUNTER; i++)
  {
    low = i * 10;
    if (i == 100)
    {
      high = 100;
    }
    else
    {
      high = low + 9;
    }
    printf("%3d %3d to %3d %3d\n", i + 1, low, high, group[i]);
  }
  return 0;
}