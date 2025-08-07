// #include <stdio.h>
// #include <stdlib.h>
// #include <pthread.h>
// #include <unistd.h>

// // Function to be run by thread 1
// void* thread_function1(void* arg) {
//     for (int i = 1; i <= 5; i++) {
//         printf("Thread 1: Count %d\n", i);
//         sleep(1);
//     }
//     pthread_exit(NULL);
// }

// // Function to be run by thread 2
// void* thread_function2(void* arg) {
//     for (int i = 1; i <= 5; i++) {
//         printf("Thread 2: Count %d\n", i);
//         sleep(1);
//     }
//     pthread_exit(NULL);
// }

// void* thread_function3(void* arg){
//   for(int i = 0 ;i<=5;i++){
//     printf("Thread 3 : Count %d\n",i);
//     sleep(1);
//   }
//   pthread_exit(NULL);
// }

// int main() {
//     pthread_t t1, t2, t3;

//     // Create two threads
//     pthread_create(&t1, NULL, thread_function1, NULL);
//     pthread_create(&t2, NULL, thread_function2, NULL);
//     pthread_create(&t3, NULL , thread_function3, NULL );

//     // Wait for threads to finish
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);
//     pthread_join(t3,NULL);

//     printf("Main thread: Both threads finished.\n");

//     return 0;
// }


#include <stdio.h>

int main() {
    int value = 42;

    int *p = &value;        // level 1
    int **pp = &p;          // level 2
    int ***ppp = &pp;       // level 3
    int ****pppp = &ppp;    // level 4
    ****pppp = 100; // Modify the value through the pointer chain
    int *****ppppp= &pppp; // level 5
    *****ppppp = 200; // Modify the value through the pointer chain
    printf("Value      = %d\n", value);       // 42
    printf("*p         = %d\n", *p);          // 42
    printf("**pp       = %d\n", **pp);        // 42
    printf("***ppp     = %d\n", ***ppp);      // 42
    printf("****pppp   = %d\n", ****pppp);    // 42

    return 0;
}

