#include<iostream>
using namespace std;

void countLikes(int *likePtr){
    cout << "like Ptr "<< likePtr <<  "  "<< *likePtr << "\n";
    *likePtr = *likePtr +1;
}

int main ()
{
    int likes;
    cin >> likes;
    
    countLikes(&likes);

    cout << "Likes " << likes << "\n";

    return 0;
}