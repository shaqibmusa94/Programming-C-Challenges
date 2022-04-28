  char low_char[] = "be the best version of you";

  for(int z = 0; z < strlen(low_char); z++)
  {
    if(low_char[z] != 32)
    {
      low_char[z] -= 32;
    }
  }

  printf("New sentence is %s\n", low_char);
