// Program to test pthread shceduling scope

#include <pthread.h>
#include <stdio.h>
#include <time.h>

#define NUM_THREADD 5

void *runner(void *param);

int main(int argc, char *argv[]) {

  int i, scope;
  pthread_t tid[NUM_THREADD];
  pthread_attr_t attr;

  // get the default attributes
  pthread_attr_init(&attr);

  // first inquire on the currnet scope
  if(pthread_attr_getscope(&attr, &scope) != 0){
    fprintf(stderr, "Unable to get scheduling scope.\n");
  } else {
    if(scope == PTHREAD_SCOPE_PROCESS)
      printf("PTHREAD_SCOPE_PROCESS");
    else if(scope == PTHREAD_SCOPE_SYSTEM)
      printf("PTHREAD_SCOPE_SYSTEM");
    else
      fprintf(stderr, "Illegal scope value.\n");
  }

  // set the scheduling algorithm to PCS or SCS
  pthread_attr_setscope(&attr, PTHREAD_SCOPE_SYSTEM);

  for(int i = 0; i < NUM_THREADD; i++)
    pthread_create(&tid[i], &attr, runner, NULL);

  for(int i = 0; i < NUM_THREADD; i++)
    pthread_join(tid[i], NULL);

}

// each thread will begin to control in this function
void *runner(void *param) {
  // do something
  time_t timer;
  /* struct tm *ptm = gmtime(&timer); */
  char *cur = ctime(&timer);
  printf("I am thread: %s \n", cur);
  pthread_exit(0);
}
