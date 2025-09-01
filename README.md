# Queue Implementation in C (FIFO)

This project demonstrates a **basic implementation of a queue data structure (FIFO - First In, First Out)** using arrays in the **C programming language**.  
It allows the user to **insert, remove, display, and reset** elements in the queue through a simple menu-driven interface.

---

## 📌 What is a Queue?

A **queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle.  
- The **first element inserted** is the **first one to be removed**.  
- It works like a real-life queue (line) of people: the first person in line is the first one to be served.

---

## 📂 Features in This Implementation

- **Insert**: Add an element to the end of the queue.  
- **Remove**: Remove the element at the front of the queue.  
- **Display**: Show all elements currently in the queue.  
- **Reset**: Clear the queue (reset indices).  
- **Exit**: Quit the program.  

⚠️ **Limitations**:  
- The queue has a **fixed size of 5 elements**.  
- It does not reuse memory when elements are removed (not circular).  

---

## 💻 Source Code

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int queue[5];        // Fixed-size queue with capacity of 5
    int front = 0;       // Points to the first element
    int rear = 0;        // Points to the next free position
    int option, value;

    system("cls"); // Clear screen (Windows only)

    do {
        printf("1 - Insert\n");
        printf("2 - Remove\n");
        printf("3 - Display\n");
        printf("4 - Reset\n");
        printf("0 - Exit\n");
        printf("Choose: ");
        scanf("%d", &option);

        switch(option) {
            case 1: // Insert
                system("cls");
                if (rear == 5) {
                    printf("Queue is full!\n");
                } else {
                    printf("Value: ");
                    scanf("%d", &value);
                    queue[rear] = value;
                    rear++;
                }
                break;

            case 2: // Remove
                system("cls");
                if (front == rear) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Removed: %d\n", queue[front]);
                    front++;
                }
                break;

            case 3: // Display
                system("cls");
                if (front == rear) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue: \n");
                    for (int i = front; i < rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Reset
                system("cls");
                front = 0;
                rear = 0;
                value = 0;
                printf("Queue has been reset!\n");
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option!\n");
        }
    } while(option != 0);

    return 0;
}
⚙️ How It Works (Step by Step)
Insertion (rear)

New elements are added at the end of the queue (queue[rear]).

After insertion, rear moves forward.

Removal (front)

Elements are removed from the front of the queue (queue[front]).

After removal, front moves forward.

Display

Loops from front to rear - 1 to print the queue contents.

Reset

Resets front and rear to 0, clearing the queue.

🚀 Example Run
vbnet
Copiar código
1 - Insert
2 - Remove
3 - Display
4 - Reset
0 - Exit
Choose: 1
Value: 10
Choose: 1
Value: 20
Choose: 3
Queue:
10 20
Choose: 2
Removed: 10
Choose: 3
Queue:
20
Choose: 0
Exiting...
📊 Complexity Analysis
Insertion → O(1)

Removal → O(1)

Display → O(n)
