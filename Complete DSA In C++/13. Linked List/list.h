
class List;

class Node{

    public:
    int data;
    Node* next;
    Node(int d): data(d),next(NULL){}
    //  int getData(){
    //     return data;
    //  }
    // friend class List;
};

class List{
    Node* head ;
    Node* tail ;

    int searchHelper(Node* start , int key){
        if(start == NULL){
            return -1;
        }
        if(start->data == key){
            return 0;
        }
        int subIndex = searchHelper(start->next,key);
        if(subIndex == -1){
            return -1;
        }
        return subIndex+1;
    }

    public:
    List():head(NULL),tail(NULL){}
    void push_front(int data);
    void push_back(int data);
    void insert(int pos ,int data);
    int search(int key);
    int recursiveSearch(int key);
    Node* begin(){
       return head;
    }
};

void List::push_front(int data){
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void List::push_back(int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = tail = temp;
    }else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void List::insert(int pos , int data){
    if(pos == 1){
        push_front(data);
        return;
    }else{
        Node* curr = head;
        int count = 1;
        while(count < pos-1){
            curr = curr->next;
            count++;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

int List::search(int key){
    if(head == NULL){
        return -1;
    }
    Node* temp = head;
    int index =0;
    while(temp != NULL){
        if(temp->data == key){
            return index;
        }
        temp =temp->next;
        index++;
    }
    return -1;
}

int List:: recursiveSearch(int key){
     int index = searchHelper(head,key);
     return index;
}