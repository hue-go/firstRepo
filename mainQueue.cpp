#include <iostream>
#include "queue.h"

int main() {
    queue myQueue;
    int choice, value;

    do {
        cout << "\n--- Queue Operations Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Size\n";
        cout << "5. Print Queue\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                myQueue.enqueue(value);
                break;

            case 2:
                try {
                    cout << "Dequeued: " << myQueue.dequeue() << endl;
                } catch (const runtime_error& e) {
                    cout << e.what() << endl;
                }
                break;

            case 3:
                try {
                    cout << "Peek (see front element): " << myQueue.peek() << endl;
                } catch (const runtime_error& e) {
                    cout << e.what() << endl;
                }
                break;

            case 4:
                cout << "Current Size: " << myQueue.size() << endl;
                break;

            case 5:
                myQueue.print();
                break;

            case 6:
                cout << "EXIT\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6); // Run until user exits [cite: 69]

    return 0;
}