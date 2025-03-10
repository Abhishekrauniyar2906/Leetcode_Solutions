class MyCircularQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    MyCircularQueue(int size) {
        this->size = size;
        arr = new int[size];  
        front = -1;
        rear = -1;
    }

    bool enQueue(int value) {
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) { 
            return false;
        }

        if (front == -1) {  
            front = rear = 0;
        } 
        else if (rear == size - 1 && front != 0) { 
            rear = 0;
        } 
        else {
            rear++;
        }

        arr[rear] = value;
        return true;
    }

    bool deQueue() {
        if (front == -1) {  
            return false;
        }

        if (front == rear) { 
            front = rear = -1;
        } 
        else if (front == size - 1) { 
            front = 0;
        } 
        else {
            front++;
        }

        return true;
    }

    int Front() {
        return (front == -1) ? -1 : arr[front];
    }

    int Rear() {
        return (rear == -1) ? -1 : arr[rear];
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((front == 0 && rear == size - 1) || (rear == front - 1));
    }

    ~MyCircularQueue() {
        delete[] arr;  
    }
};
