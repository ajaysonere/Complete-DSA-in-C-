template <typename T>
class Node{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data = data;
        this->next = 0;
    }
};

template <typename T>
class Stack{
    Node<T> *head;

    public:

    Stack(){
        head = 0;
    }

    void push(T data){
        Node* temp = new <T>Node(data);
    }
};