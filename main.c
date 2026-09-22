#include <stdio.h>
#include <signal.h>

int main() {
  int a,b;
  scanf("%d%d",&a,&b);
  raise(SIGSEGV);
  printf("%d",a+b);
  return 0;
}
// telemetry storage test

// per-test telemetry persistence test

// signal_number persistence test
