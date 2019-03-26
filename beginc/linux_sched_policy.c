// Program examines linux scheduling policy
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADD 5

void *runner(void *param) {
  int n = rand() % 30;
  printf("I am thread %d\n", n);
  pthread_exit(0);
}

int main(int argc, char *argv[]) {
  int i, policy;
  pthread_t tid[NUM_THREADD];
  pthread_attr_t attr;

  // get the default attributes
  pthread_attr_init(&attr);

  // get current scheduling policy
  if(pthread_attr_getschedpolicy(&attr, &policy) != 0)
    fprintf(stderr, "Unable to get policy.\n");
  else {
    if(policy == SCHED_OTHER)
      printf("SCHED_OTHER.\n");
    else if(policy == SCHED_RR)
      printf("SCHED_RR.\n");
    else if(policy == SCHED_FIFO)
      printf("SCHED_FIFO.\n");
  }

  // set the scheduling policy
  if(pthread_attr_setschedpolicy(&attr, SCHED_FIFO) != 0)
    fprintf(stderr, "Unable to set policy.\n");

  // create threads
  for(i = 0; i < NUM_THREADD; i ++)
    pthread_create(&tid[i], &attr, runner, NULL);

  // join threads
  for(i = 0; i < NUM_THREADD; i ++)
    pthread_join(tid[i], NULL);

}
