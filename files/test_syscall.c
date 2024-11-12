#define _GNU_SOURCE
#include <stdio.h>
#include <sys/syscall.h>
#include <time.h>
#include <unistd.h>
/*
 * Put your syscall number here.
 */
#define SYS_query 548
#define SYS_update 549
#define SYS_vdso_query 550
#define SYS_vdso_update 551
extern int __vdso_query(int *input, int len);
int main(int argc, char **argv) {
  int num = 50;
  int input[4] = {atoi(argv[1]), atoi(argv[2]), 3, 4};
  int res = syscall(SYS_query, 1, 3, 2);
  // printf("Before: syscall result: %d\n", res);

  // // int res = syscall(SYS_vdso_query, 0);
  // // printf("%d\n", res);
  // int before = __vdso_query(input, 2);
  // printf("Before: vdso result: %d\n", before);

  // syscall(SYS_update, argv[1], argv[2], 2, 1, 0);
  // int after3 = syscall(SYS_query, argv[1], argv[2], 2);
  // printf("After syscall: %d\n", after3);

  // // int after = __vdso_add(1, 3);
  // // printf("After syscall: %d\n", after);
  // // int before = syscall(SYS_vdso_query);

  // // int after = syscall(SYS_vdso_query);
  // int after = __vdso_query(input, 4);
  // printf("After the vdso is %d\n", after);

  // int after2 = syscall(SYS_vdso_query, 0);
  // printf("After the vdso is %d\n", after2);
  // after2 = syscall(SYS_vdso_query, 1);
  // printf("After the vdso is %d\n", after2);
  int after;
  clock_t time_before = clock();
  int i = 0;
  for (i = 0; i < 1000000000; i++) {
    after = syscall(SYS_query, atoi(argv[1]), atoi(argv[2]), 2);
  }
  clock_t difference = clock() - time_before;
  printf("Time for syscall:%f\n", difference * 1.0 / CLOCKS_PER_SEC);

  time_before = clock();
  for (i = 0; i < 1000000000; i++) {
    after = __vdso_query(input, 2);
  }
  difference = clock() - time_before;
  printf("Time for vdso:%f\n", difference * 1.0 / CLOCKS_PER_SEC);

  // time_before = clock();
  // for (i = 0; i < 100000; i++) {
  //   after = predict(atoi(argv[1]), atoi(argv[2]), 2);
  // }
  // difference = clock() - time_before;
  // printf("Time for shared library:%ld\n", difference);

  // time_before = clock();
  // for (i = 0; i < 100000; i++) {
  //   syscall(SYS_update, atoi(argv[1]), atoi(argv[2]), 2, 1, 0);
  // }
  // difference = clock() - time_before;
  // printf("Time for syscall update:%ld\n", difference);

  // time_before = clock();
  // for (i = 0; i < 100000; i++) {
  //   update(atoi(argv[1]), atoi(argv[2]), 2, 1, 0);
  // }
  // difference = clock() - time_before;
  // printf("Time for shared library:%ld\n", difference);

  return 0;
}
