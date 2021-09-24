#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void oh_flag_reading_function_please_ret_to_me()
{
  char flag[0x100] = {0};
  FILE *fp = fopen("./flag.txt", "r");
  if (!fp)
  {
    puts("no flag!! contact a member of Coding Club RVCE");
    exit(-1);
  }
  fgets(flag, 0xff, fp);
  puts(flag);
  fclose(fp);
}

int main(void)
{
  char comments[32];

  setbuf(stdout, NULL);
  setbuf(stdin, NULL);
  setbuf(stderr, NULL);

  puts("alright, the Coding Club Project meeting is tomorrow and i have to come up with a new Project...");
  puts("how about this, we'll make a generic pwnable with an overflow and ret a vulnerable fn !!");
  puts("slap on some flavortext and there's no way the Club President will fire me now!");
  puts("this is genius!! what do you think?");

  gets(comments);
}