#include <stdio.h>
#include <pthread.h>

void* PrintHello(void* threadId){
  long* data = (long*) threadId;
  printf("Hello World! It's me, thread #%Id!\n", *data);
  pthread_exit(NULL);
}

int main(void) {
  pthread_t threads[5];
  for (long tid = 0; tid < 5; tid++){
    pthread_create(&threads[tid], NULL, PrintHello, (void*) &tid);
  }
  pthread_exit(NULL);
  return 0;
}
