

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
        Node<T> *temp = new Node <T> (data);
        temp->next = head;
        head = temp;
    }

    bool isEmpty(){
        return head == NULL;
    }

    T top(){
        if(head == NULL )
            return -1;
        else
            return head->data; 
    }

    void pop(){
       if(head != NULL ){
            Node<T> *temp = head;
            head = head->next;
            delete temp;
       }else{
          return;
       }
    }
};