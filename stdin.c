#include <stdio.h>
#include <fcntl.h>

int main(void)
{
  printf("%p\n", stdin);
  fclose(stdin);
  int fd = _open ("nul", _O_RDWR);
  printf("%d = 0\n", fd);
  FILE *f = _fdopen (fd, "r");
  printf("%p = %p\n", stdin, f);
  return 0;
}
