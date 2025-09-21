#include<stdio.h>
int main() {
    int queue[3], front = 0, rear = -1, i, n, ch;
    
    printf("|1. Queue|\n");
    printf("|2. Dequeue|\n");
    printf("|3. Print|\n");
    printf("|0. Exit|\n");
    do {
        printf("Choice: ");
        scanf("%d", &ch);
        if (ch == 1) {
            if (rear < 2) {
                printf("Number to enter in queue: ");
                scanf("%d", &n);
                rear++;
                queue[rear] = n;
            } else {
                printf("Queue is full!\n");
            }
        } else if (ch == 2) {
            if (front > rear) {
                printf("Queue is empty!\n");
            } else {
                printf("Dequeued: %d\n", queue[front]);
                for (i = 0; i < rear; i++) {
                    queue[i] = queue[i + 1];
                }
                rear--;
            }
        } else if (ch == 3) {
            if (front > rear) {
                printf("Queue is empty!\n");
            } else {
                printf("Queue: ");
                for (i = front; i <= rear; i++) {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }
        }
    } while (ch != 0);
    return 0;
}
